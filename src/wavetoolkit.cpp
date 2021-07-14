/**
BSD-3-Clause
Copyright 2019 Alliance for Sustainable Energy, LLC
Redistribution and use in source and binary forms, with or without modification, are permitted provided 
that the following conditions are met :
1.	Redistributions of source code must retain the above copyright notice, this list of conditions 
and the following disclaimer.
2.	Redistributions in binary form must reproduce the above copyright notice, this list of conditions 
and the following disclaimer in the documentation and/or other materials provided with the distribution.
3.	Neither the name of the copyright holder nor the names of its contributors may be used to endorse 
or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED.IN NO EVENT SHALL THE COPYRIGHT HOLDER, CONTRIBUTORS, UNITED STATES GOVERNMENT OR UNITED STATES 
DEPARTMENT OF ENERGY, NOR ANY OF THEIR EMPLOYEES, BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, 
OR CONSEQUENTIAL DAMAGES(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include<algorithm>

#include <wx/checklst.h>
#include <wx/combobox.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/sizer.h>
#include <wx/dirdlg.h>
#include <wx/progdlg.h>
#include <wx/checkbox.h>
#include <wx/tokenzr.h>
#include <wx/srchctrl.h>

#include <wex/easycurl.h>
#include <wex/jsonval.h>
#include <wex/jsonreader.h>

#include "wavetoolkit.h"
#include "main.h"


static const char* help_text =
"NREL Wave Toolkit data is only available for locations in the continental United States. Each weather file contains wave resource data for a single year.\n\n"
"See Help for details.";

enum {
	ID_txtAddress, ID_txtFolder, ID_cboFilter, /*ID_cboWeatherFile,*/ ID_chlResources,
	ID_btnSelectAll, ID_btnClearAll, ID_btnSelectFiltered, ID_btnShowSelected, ID_btnShowAll, ID_btnResources, ID_btnFolder, ID_search, ID_radAddress, ID_radLatLon, ID_txtLat, ID_txtLon,
    ID_cboYears, ID_lstYears, ID_radSingleYear, ID_radMultiYear
};

BEGIN_EVENT_TABLE( WaveDownloadDialog, wxDialog )
	EVT_BUTTON(ID_btnFolder, WaveDownloadDialog::OnEvt)
    EVT_RADIOBUTTON(ID_radAddress, WaveDownloadDialog::OnEvt)
    EVT_RADIOBUTTON(ID_radLatLon, WaveDownloadDialog::OnEvt)
	//EVT_BUTTON(wxID_OK, WaveDownloadDialog::OnEvt)
	EVT_CHECKLISTBOX(ID_chlResources, WaveDownloadDialog::OnEvt)
	EVT_BUTTON(wxID_HELP, WaveDownloadDialog::OnEvt)
END_EVENT_TABLE()


WaveDownloadDialog::WaveDownloadDialog(wxWindow *parent, const wxString &title)
	 : wxDialog( parent, wxID_ANY, title,  wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER )
{
	wxString dnpath;
	SamApp::Settings().Read("WaveDownloadFolder", &dnpath);
	if (dnpath.Len() <=0)
		SamApp::Settings().Read("wave_download_path", &dnpath);
	m_txtFolder = new wxTextCtrl(this, ID_txtFolder, dnpath, wxDefaultPosition, wxDefaultSize, 0);// , wxDefaultPosition, wxSize(500, 30));
	m_txtFolder->SetValue(dnpath);
    m_btnFolder = new wxButton(this, ID_btnFolder, "...", wxDefaultPosition, wxSize(30, 30));
	//m_txtAddress = new wxTextCtrl(this, ID_txtAddress, "40.842,-124.25");// , wxDefaultPosition, wxSize(500, 30));

    wxBoxSizer* szFolder = new wxBoxSizer(wxHORIZONTAL);
    szFolder->Add(new wxStaticText(this, wxID_ANY, "Choose download folder:"), 0, wxALL, 10);
    szFolder->Add(m_txtFolder, 5, wxALL | wxEXPAND, 2);
    szFolder->Add(m_btnFolder, 0, wxALL, 2);

    radAddress = new wxRadioButton(this, ID_radAddress, "Enter street address or zip code:");
    radLatLon = new wxRadioButton(this, ID_radLatLon, "Enter location coordinates (deg):");
    //radSingleYear = new wxRadioButton(this, ID_radSingleYear, "Choose a single year");
    //radMultiYear = new wxRadioButton(this, ID_radMultiYear, "Choose years");
    txtAddress = new wxTextCtrl(this, ID_txtAddress, "Eureka, CA");

    txtLat = new wxTextCtrl(this, ID_txtLat, "40", wxDefaultPosition, wxDefaultSize, 0, ::wxTextValidator(wxFILTER_NUMERIC));
    txtLon = new wxTextCtrl(this, ID_txtLon, "-116", wxDefaultPosition, wxDefaultSize, 0, ::wxTextValidator(wxFILTER_NUMERIC));

	wxString msg = "Use this window to list all weather files available from the USWave dataset for a given location, and choose files to download and add to your solar resource library.\n";
	msg += "Type an address or latitude and longtitude, for example, \"eureka ca\" or \"40.842,-124.25\", and click Find to list available files.\n";
	msg += "When the list appears, select the file or files you want to download, or use the filter and auto-select buttons to find and select files.\n";
	msg += "Choose the download folder where you want SAM to save files, or use the default SAM Downloaded Weather Files folder.\n";
	msg += "SAM automatically adds the folder to the list of folders it uses to populate your solar resource library.\n";
	msg += "Click OK to download the selected files and add them to your solar resource library.";

    wxArrayString years;
    wxArrayString list_years;
    for (int x = 1979; x < 2011; x++) {
        wxString year_string = std::to_string(x);
        years.Add(year_string);
        list_years.Add(year_string);
    }

    lstYears = new wxListBox(this, ID_lstYears, wxDefaultPosition, wxDefaultSize, list_years, wxLB_MULTIPLE);

    wxBoxSizer* szll = new wxBoxSizer(wxHORIZONTAL);
    szll->Add(new wxStaticText(this, wxID_ANY, "Latitude"), 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    szll->Add(txtLat, 0, wxALL, 5);
    szll->Add(new wxStaticText(this, wxID_ANY, "Longitude"), 0, wxALL | wxALIGN_CENTER_VERTICAL, 5);
    szll->Add(txtLon, 0, wxALL, 5);

    wxFlexGridSizer* szgrid = new wxFlexGridSizer(2);
    szgrid->AddGrowableCol(1);
    szgrid->Add(radAddress, 0, wxALL | wxALIGN_CENTER_VERTICAL, 10);
    szgrid->Add(txtAddress, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 1);
    szgrid->Add(radLatLon, 0, wxALL | wxALIGN_CENTER_VERTICAL, 10);
    szgrid->Add(szll, 0, wxALL | wxEXPAND | wxALIGN_CENTER_VERTICAL, 1);

    wxBoxSizer* szyr = new wxBoxSizer(wxHORIZONTAL);
    szyr->Add(new wxStaticText(this, wxID_ANY, "Select years"), wxALL | wxALIGN_CENTER_VERTICAL, 15);
    szyr->Add(lstYears, 0, wxALL, 5);

    
    wxBoxSizer* szmain = new wxBoxSizer(wxVERTICAL);
    szmain->Add(new wxStaticText(this, wxID_ANY, msg), 0, wxALL | wxEXPAND, 10);
    szmain->Add(szgrid, 10, wxALL | wxEXPAND, 10);
    szmain->Add(szyr, 0, wxLEFT | wxRIGHT, 10);
    szmain->Add(szFolder, 0, wxALL | wxEXPAND, 10);
    
    

    wxStaticText* note = new wxStaticText(this, wxID_ANY, help_text);
    note->Wrap(550);
    szmain->Add(note, 0, wxLEFT | wxRIGHT | wxALIGN_CENTER, 10);

    szmain->Add(CreateButtonSizer(wxHELP | wxOK | wxCANCEL), 0, wxALL | wxEXPAND, 10);

    SetSizer(szmain);
    Fit();

    radAddress->SetValue(true);
    radLatLon->SetValue(false);
    txtAddress->SetFocus();
    txtAddress->SelectAll();
    txtLat->Enable(false);
    txtLon->Enable(false);
    lstYears->Enable(true);

}


void WaveDownloadDialog::OnEvt( wxCommandEvent &e )
{
	switch( e.GetId() )
	{
		case wxID_HELP:
			SamApp::ShowHelp("nsrdb_advanced_download");
            //SamApp::ShowHelp("wave_advanced_download");
			break;
        case ID_radAddress:
        case ID_radLatLon:
            {
                bool addr = radAddress->GetValue();
                txtAddress->Enable(addr);
                txtLat->Enable(!addr);
                txtLon->Enable(!addr);
            }
            break;
		case ID_btnFolder:
			{
				wxDirDialog dlg(SamApp::Window(), "Choose Download Folder", m_txtFolder->GetValue(), wxDD_DEFAULT_STYLE | wxDD_DIR_MUST_EXIST);
				if (dlg.ShowModal() == wxID_OK)
				{
					m_txtFolder->SetValue( dlg.GetPath());
					SamApp::Settings().Write("wave_data_paths", dlg.GetPath());
				}
			}
			break;
		
	}
}

size_t WaveDownloadDialog::SelectItems( wxString str_filter, wxCheckBox *check_box )
{
	size_t count = 0;
	size_t item_first = 0;
	if (m_chlResources->IsEmpty()) wxMessageBox("No files to choose. Type a location and click Find to find files.", "Wave Download Message", wxOK, this);
	else
	{
		for (size_t i = 0; i < m_links.size(); i++)
		{
			m_links[i].is_visible = true;
			if (m_links[i].display.Lower().Contains(str_filter) && check_box->IsChecked())
			{
				if (count == 0) item_first = i;
				m_links[i].is_selected = true;
				count++;
			}
			else if (m_links[i].display.Lower().Contains(str_filter) && !check_box->IsChecked()) m_links[i].is_selected = false;
		}
	}
	return item_first;
}

void WaveDownloadDialog::RefreshList( size_t first_item )
{
	m_chlResources->Freeze();
	m_chlResources->Clear();
	for (size_t i = 0; i < m_links.size(); i++)
	{
		if (m_links[i].is_visible)
		{
			int ndx = m_chlResources->Append(m_links[i].display);
			if (m_links[i].is_selected)
				m_chlResources->Check(ndx, true);
			else
				m_chlResources->Check(ndx, false);
		}
	}
	m_chlResources->Thaw();
	m_chlResources->SetFirstItem(first_item);
}

wxString WaveDownloadDialog::GetYear()
{
    bool year_bool = radSingleYear->GetValue();
    bool multiyear_bool = radMultiYear->GetValue();
    if (year_bool)
        return cboYears->GetStringSelection();
    else return "";
    
}

wxArrayString WaveDownloadDialog::GetMultiYear()
{
    wxArrayString my;
    for (size_t i = 0; i < lstYears->GetCount(); i++)
        if (lstYears->IsSelected(i))
            my.Add(lstYears->GetString(i));
    return my;
}

bool WaveDownloadDialog::IsSingleYear()
{
    return radSingleYear->GetValue();
}

bool WaveDownloadDialog::IsAddressMode()
{
    return radAddress->GetValue();
}

wxString WaveDownloadDialog::GetAddress()
{
    return txtAddress->GetValue();
}

double WaveDownloadDialog::GetLatitude()
{
    double num = std::numeric_limits<double>::quiet_NaN();
    txtLat->GetValue().ToDouble(&num);
    return num;
}

double WaveDownloadDialog::GetLongitude()
{
    double num = std::numeric_limits<double>::quiet_NaN();
    txtLon->GetValue().ToDouble(&num);
    return num;
}

void WaveDownloadDialog::GetResources()
{
	// hit api with address and return available resources
	wxString location = m_txtAddress->GetValue();
	if (location == "")
	{
		wxMessageBox("Type a latitude-longitude pair (lat, lon), street address, or location name and click Find.", "Wave Download Message", wxOK, this);
		return;
	}

	wxString locname = "";

	bool is_addr = false;
	const wxChar* locChars = location.c_str();
	for (int i = 0; i < (int)location.Len(); i++) 
	{
		if (isalpha(locChars[i]))
			is_addr = true;
	}
	double lat, lon;
	if (is_addr)	//entered an address instead of a lat/long
	{
		if (!wxEasyCurl::GeoCodeDeveloper(location, &lat, &lon))
		{
			wxMessageBox("Failed to geocode address.\n\n" + location, "Wave Download Message", wxOK, this);
			return;
		}
		else
			locname = wxString::Format("lat_%.5lf_lon_%.5lf", lat, lon);
	}
	else
	{
		wxArrayString parts = wxSplit(location, ',');
		if (parts.Count() < 2)
		{
			wxMessageBox("Type a valid latitude-longitude (lat, lon), street address, or location name.", "Wave Download Message", wxOK, this);
			return ;
		}
		else
		{
			parts[0].ToDouble(&lat);
			parts[1].ToDouble(&lon);
			locname = wxString::Format("lat_%.5lf_lon_%.5lf", lat, lon);
		}
	}

	//Create URL for weather file download
	wxString url;
	url = SamApp::WebApi("wave_query");
	url.Replace("<LAT>", wxString::Format("%lg", lat), 1);
	url.Replace("<LON>", wxString::Format("%lg", lon), 1);

	//Download the weather file
	wxEasyCurl curl;
	bool ok = curl.Get(url, "Getting list of available files from USWave dataset...", SamApp::Window());

	if (!ok)
	{
		wxMessageBox("Wave Data Query failed.\n\nThere may be a problem with your internet connection,\nor the USWave web service may be down.", "Wave Download Message", wxOK, this);
		return;
	}
#ifdef __DEBUG__
	wxLogStatus("url: %s", (const char *)url.c_str());
#endif
	wxString json_data = curl.GetDataAsString();
	if (json_data.IsEmpty())
	{
		wxMessageBox("Wave Data Query failed.\n\nJSON data empty.\nPlease try again and contact SAM Support if you continue to have trouble.", "Wave Download Message", wxOK, this);
		return;
	}

	wxJSONReader reader;
	//	reader.SetSkipStringDoubleQuotes(true);
	wxJSONValue root;
	if (reader.Parse(json_data, &root) != 0)
	{
		wxMessageBox("Wave Data Query failed.\n\nCould not process JSON from Wave Data Query response for\n" + location + "\n\nPlease try again and contact SAM Support if you continue to have trouble.", "Wave Download Message", wxOK, this);
		return;
	}

	wxJSONValue meta_data = root["metadata"];
	wxJSONValue result_set = meta_data["resultset"];

	if (result_set["count"].AsInt() == 0)
	{
		wxMessageBox("No Weather Files Found.\n\nWave Data Query did not return any files for\n" + location, "Wave Download Message", wxOK, this);
		return;
	}

    if (root.HasMember("error"))
    {
       wxJSONValue error_list = root.Item("error");
       wxMessageBox( wxString::Format("Wave API error!\n\nMessage: %s\n\nCode: %s ", error_list.Item("message").AsString(), error_list.Item("code").AsString() ));
       return;
    }

	wxJSONValue output_list = root["outputs"];

	// format location to use in file name
	location.Replace("\\", "_"); 
	location.Replace("/", "_"); 
	location.Replace(" ", "_");
	location.Replace(",", "_");
	location.Replace("(", "_"); 
	location.Replace(")", "_");
	location.Replace("__", "_");

	m_chlResources->Clear();
	m_links.clear();
	for (int i_outputs = 0; i_outputs<output_list.Size(); i_outputs++)
	{
		wxJSONValue out_item = output_list[i_outputs];
		wxJSONValue links_list = output_list[i_outputs]["links"];
		for (int i_links = 0; i_links < links_list.Size(); i_links++)
		{
			wxString name = output_list[i_outputs]["name"].AsString();
			wxString displayName = output_list[i_outputs]["displayName"].AsString();

			wxString year = links_list[i_links]["year"].AsString();
			wxString URL = links_list[i_links]["link"].AsString();
			wxString interval = links_list[i_links]["interval"].AsString();
			URL.Replace("yourapikey", "<SAMAPIKEY>");
			URL.Replace("youremail", "<USEREMAIL>");
			// URL - minimum attributes for each type 
			wxString attributes = "";
			if (name.Trim() == "psm3") // https://developer.nrel.gov/docs/solar/nsrdb/psm3-download/
				attributes = "&attributes=dhi,dni,dew_point,air_temperature,surface_pressure,relative_humidity,wind_speed,wind_direction,surface_albedo";
			else if (name.Trim() == "psm3-5min") // https://developer.nrel.gov/docs/solar/nsrdb/psm3-5min-download/
				attributes = "&attributes=dhi,dni,dew_point,air_temperature,surface_pressure,relative_humidity,wind_speed,wind_direction,surface_albedo";
			else if (name.Trim() == "psm3-tmy") // https://developer.nrel.gov/docs/solar/nsrdb/psm3-tmy-download/
				attributes = "&attributes=dhi,dni,ghi,dew_point,air_temperature,surface_pressure,wind_direction,wind_speed,surface_albedo";
			else if (name.Trim() == "suny-india") // https://developer.nrel.gov/docs/solar/nsrdb/suny-india-data-download/
				attributes = "&attributes=dhi,dni,ghi,dew_point,surface_temperature,surface_pressure,relative_humidity,snow_depth,wdir,wspd";
			else if (name.Trim() == "msg-iodc") // https://developer.nrel.gov/docs/solar/nsrdb/meteosat-download/
				attributes = "&attributes=dhi,dni,ghi,dew_point,air_temperature,surface_pressure,relative_humidity,wind_direction,wind_speed,surface_albedo";
			else
				attributes = ""; // use default attributes
#ifdef __DEBUG__
			wxLogStatus("link info: %s, %s, %s, %s, %s, %s", displayName.c_str(), name.c_str(), /*type.c_str(),*/ year.c_str(), interval.c_str(), URL.c_str());
#endif
			
			
			
		}
	}
}