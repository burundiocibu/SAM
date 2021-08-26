#include <string>
#include <utility>
#include <vector>
#include <memory>
#include <iostream>

#include <ssc/sscapi.h>

#include "SAM_api.h"
#include "ErrorHandler.h"
#include "SAM_Levpartflip.h"

SAM_EXPORT int SAM_Levpartflip_execute(SAM_table data, int verbosity, SAM_error* err){
	return SAM_module_exec("levpartflip", data, verbosity, err);
}

SAM_EXPORT void SAM_Levpartflip_Revenue_flip_target_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "flip_target_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_flip_target_year_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "flip_target_year", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_escalation_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_escalation", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_price_input_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "ppa_price_input", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_soln_max_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_soln_max", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_soln_max_iterations_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_soln_max_iterations", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_soln_min_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_soln_min", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_soln_mode_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_soln_mode", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Revenue_ppa_soln_tolerance_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_soln_tolerance", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_analysis_period_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "analysis_period", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_batt_salvage_percentage_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_salvage_percentage", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_cost_debt_closing_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cost_debt_closing", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_cost_debt_fee_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cost_debt_fee", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_cost_other_financing_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cost_other_financing", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_debt_option_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "debt_option", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_debt_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "debt_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_dscr_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dscr", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_dscr_reserve_months_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dscr_reserve_months", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip1_reserve_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip1_reserve_cost", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip1_reserve_freq_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip1_reserve_freq", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip2_reserve_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip2_reserve_cost", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip2_reserve_freq_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip2_reserve_freq", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip3_reserve_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip3_reserve_cost", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip3_reserve_freq_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip3_reserve_freq", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip_reserve_depr_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip_reserve_depr_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_equip_reserve_depr_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "equip_reserve_depr_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_federal_tax_rate_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "federal_tax_rate", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_inflation_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "inflation_rate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_insurance_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "insurance_rate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_months_receivables_reserve_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "months_receivables_reserve", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_months_working_reserve_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "months_working_reserve", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_payment_option_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "payment_option", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_prop_tax_assessed_decline_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "prop_tax_assessed_decline", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_prop_tax_cost_assessed_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "prop_tax_cost_assessed_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_property_tax_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "property_tax_rate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_real_discount_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "real_discount_rate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_reserves_interest_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "reserves_interest", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_salvage_percentage_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "salvage_percentage", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_state_tax_rate_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "state_tax_rate", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_system_capacity_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_system_heat_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_heat_rate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_term_int_rate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "term_int_rate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_FinancialParameters_term_tenor_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "term_tenor", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_add_om_num_types_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "add_om_num_types", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_annual_fuel_usage_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "annual_fuel_usage", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_annual_fuel_usage_lifetime_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "annual_fuel_usage_lifetime", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_fuelcell_annual_energy_discharged_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "fuelcell_annual_energy_discharged", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_batt_capacity_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_batt_capacity_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_batt_fixed_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_batt_fixed_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_batt_nameplate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_batt_nameplate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_batt_replacement_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_batt_replacement_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_batt_variable_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_batt_variable_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_capacity_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_capacity", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_capacity_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_capacity_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fixed_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fixed", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fixed_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_fixed_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuel_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fuel_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuel_cost_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_fuel_cost_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuelcell_capacity_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fuelcell_capacity_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuelcell_fixed_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fuelcell_fixed_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuelcell_nameplate_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_fuelcell_nameplate", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuelcell_replacement_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fuelcell_replacement_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_fuelcell_variable_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_fuelcell_variable_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_opt_fuel_1_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_opt_fuel_1_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_opt_fuel_1_cost_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_opt_fuel_1_cost_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_opt_fuel_1_usage_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_opt_fuel_1_usage", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_opt_fuel_2_cost_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_opt_fuel_2_cost", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_opt_fuel_2_cost_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_opt_fuel_2_cost_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_opt_fuel_2_usage_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_opt_fuel_2_usage", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_production_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_production", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_production1_values_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_production1_values", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_production2_values_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "om_production2_values", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_production_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_production_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_om_replacement_cost_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "om_replacement_cost_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemCosts_total_installed_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "total_installed_cost", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_amount_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_amount_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_percent_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_percent_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_fed_percent_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_amount_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_amount_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_percent_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_percent_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "itc_sta_percent_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_ptc_fed_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "ptc_fed_amount", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_ptc_fed_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ptc_fed_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_ptc_fed_term_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ptc_fed_term", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_ptc_sta_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "ptc_sta_amount", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_ptc_sta_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ptc_sta_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TaxCreditIncentives_ptc_sta_term_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ptc_sta_term", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_custom_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_custom_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_macrs_15_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_macrs_15_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_macrs_5_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_macrs_5_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_sl_15_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_sl_15_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_sl_20_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_sl_20_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_sl_39_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_sl_39_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_alloc_sl_5_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_alloc_sl_5_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_custom_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_custom", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_macrs_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_macrs_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_macrs_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_macrs_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_sl_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_20_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_sl_20", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_39_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_sl_39", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_fed_sl_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_custom_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_custom", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_macrs_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_macrs_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_macrs_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_macrs_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_sl_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_20_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_sl_20", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_39_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_sl_39", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_bonus_sta_sl_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_custom_schedule_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "depr_custom_schedule", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_fedbas_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_fedbas_method", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_custom_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_custom", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_macrs_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_macrs_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_macrs_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_macrs_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_sl_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_sl_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_sl_20_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_sl_20", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_sl_39_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_sl_39", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_fed_sl_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_fed_sl_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_custom_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_custom", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_macrs_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_macrs_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_macrs_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_macrs_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_sl_15_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_sl_15", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_sl_20_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_sl_20", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_sl_39_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_sl_39", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_itc_sta_sl_5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_itc_sta_sl_5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Depreciation_depr_stabas_method_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "depr_stabas_method", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_fed_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_fed_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_fed_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_fed_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_fed_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_fed_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_fed_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_fed_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_fed_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_fed_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_fed_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_fed_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_oth_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_oth_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_oth_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_oth_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_oth_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_oth_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_oth_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_oth_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_oth_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_oth_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_oth_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_oth_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_sta_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_sta_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_sta_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_sta_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_sta_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_sta_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_sta_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_sta_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_sta_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_sta_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_sta_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_sta_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_uti_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_uti_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_uti_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_uti_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_uti_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_uti_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_uti_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_uti_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_uti_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_uti_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_cbi_uti_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cbi_uti_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_amount_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_amount_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_amount_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_amount_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_percent_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_percent_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_percent_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_percent_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_fed_percent_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_amount_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_amount_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_amount_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_amount_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_percent_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_percent_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_percent_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_percent_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_oth_percent_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_amount_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_amount_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_amount_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_amount_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_percent_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_percent_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_percent_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_percent_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_sta_percent_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_amount", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_amount_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_amount_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_amount_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_amount_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_deprbas_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_percent_deprbas_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_deprbas_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_percent_deprbas_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_maxvalue_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_percent_maxvalue", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_percent_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ibi_uti_percent_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_fed_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "pbi_fed_amount", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_fed_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_fed_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_fed_for_ds_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_fed_for_ds", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_fed_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_fed_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_fed_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_fed_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_fed_term_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_fed_term", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_oth_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "pbi_oth_amount", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_oth_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_oth_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_oth_for_ds_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_oth_for_ds", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_oth_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_oth_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_oth_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_oth_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_oth_term_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_oth_term", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_sta_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "pbi_sta_amount", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_sta_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_sta_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_sta_for_ds_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_sta_for_ds", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_sta_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_sta_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_sta_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_sta_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_sta_term_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_sta_term", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_uti_amount_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "pbi_uti_amount", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_uti_escal_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_uti_escal", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_uti_for_ds_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_uti_for_ds", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_uti_tax_fed_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_uti_tax_fed", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_uti_tax_sta_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_uti_tax_sta", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_PaymentIncentives_pbi_uti_term_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "pbi_uti_term", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemOutput_degradation_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "degradation", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemOutput_gen_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "gen", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_SystemOutput_system_capacity_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_capacity", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Moratorium_loan_moratorium_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "loan_moratorium", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Recapitalization_system_lifetime_recapitalize_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "system_lifetime_recapitalize", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Recapitalization_system_recapitalization_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_recapitalization_cost", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Recapitalization_system_recapitalization_escalation_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_recapitalization_escalation", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Recapitalization_system_use_recapitalization_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_use_recapitalization", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor1_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor1", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor2_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor2", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor3_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor3", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor4_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor4", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor5_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor5", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor6_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor6", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor7_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor7", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor8_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor8", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factor9_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "dispatch_factor9", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_factors_ts_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "dispatch_factors_ts", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_sched_weekday_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "dispatch_sched_weekday", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_dispatch_sched_weekend_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "dispatch_sched_weekend", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_ppa_multiplier_model_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "ppa_multiplier_model", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_TimeOfDelivery_system_use_lifetime_output_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "system_use_lifetime_output", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_ConstructionFinancing_construction_financing_cost_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "construction_financing_cost", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_OtherCapitalCosts_cost_dev_fee_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cost_dev_fee_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_OtherCapitalCosts_cost_equity_closing_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "cost_equity_closing", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_IRRTargets_tax_investor_equity_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tax_investor_equity_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_IRRTargets_tax_investor_postflip_cash_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tax_investor_postflip_cash_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_IRRTargets_tax_investor_postflip_tax_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tax_investor_postflip_tax_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_IRRTargets_tax_investor_preflip_cash_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tax_investor_preflip_cash_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_IRRTargets_tax_investor_preflip_tax_percent_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "tax_investor_preflip_tax_percent", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_batt_annual_charge_from_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_annual_charge_from_system", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_batt_annual_discharge_energy_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_annual_discharge_energy", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_batt_capacity_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_capacity_percent", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_battery_total_cost_lcos_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "battery_total_cost_lcos", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_grid_to_batt_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "grid_to_batt", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_monthly_batt_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "monthly_batt_to_grid", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_monthly_grid_to_batt_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "monthly_grid_to_batt", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_monthly_grid_to_load_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "monthly_grid_to_load", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Battery_monthly_system_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "monthly_system_to_grid", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_ChargesByMonth_charge_w_sys_ec_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "charge_w_sys_ec_ym", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Levpartflip_ChargesByMonth_true_up_credits_ym_mset(SAM_table ptr, double* mat, int nrows, int ncols, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_matrix(ptr, "true_up_credits_ym", mat, nrows, ncols);
	});
}

SAM_EXPORT void SAM_Levpartflip_ChargesByMonth_year1_monthly_ec_charge_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "year1_monthly_ec_charge_with_system", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Monthly_year1_monthly_ec_charge_gross_with_system_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "year1_monthly_ec_charge_gross_with_system", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_Monthly_year1_monthly_electricity_to_grid_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "year1_monthly_electricity_to_grid", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_BatterySystem_batt_bank_replacement_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_bank_replacement", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_BatterySystem_batt_computed_bank_capacity_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_computed_bank_capacity", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_BatterySystem_batt_replacement_option_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "batt_replacement_option", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_BatterySystem_batt_replacement_schedule_percent_aset(SAM_table ptr, double* arr, int length, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_array(ptr, "batt_replacement_schedule_percent", arr, length);
	});
}

SAM_EXPORT void SAM_Levpartflip_BatterySystem_battery_per_kWh_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "battery_per_kWh", number);
	});
}

SAM_EXPORT void SAM_Levpartflip_BatterySystem_en_batt_nset(SAM_table ptr, double number, SAM_error *err){
	translateExceptions(err, [&]{
		ssc_data_set_number(ptr, "en_batt", number);
	});
}

SAM_EXPORT double SAM_Levpartflip_Revenue_flip_target_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "flip_target_percent", &result))
		make_access_error("SAM_Levpartflip", "flip_target_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_flip_target_year_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "flip_target_year", &result))
		make_access_error("SAM_Levpartflip", "flip_target_year");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_ppa_escalation_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_escalation", &result))
		make_access_error("SAM_Levpartflip", "ppa_escalation");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Revenue_ppa_price_input_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ppa_price_input", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "ppa_price_input");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_ppa_soln_max_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_soln_max", &result))
		make_access_error("SAM_Levpartflip", "ppa_soln_max");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_ppa_soln_max_iterations_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_soln_max_iterations", &result))
		make_access_error("SAM_Levpartflip", "ppa_soln_max_iterations");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_ppa_soln_min_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_soln_min", &result))
		make_access_error("SAM_Levpartflip", "ppa_soln_min");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_ppa_soln_mode_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_soln_mode", &result))
		make_access_error("SAM_Levpartflip", "ppa_soln_mode");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Revenue_ppa_soln_tolerance_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_soln_tolerance", &result))
		make_access_error("SAM_Levpartflip", "ppa_soln_tolerance");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_analysis_period_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "analysis_period", &result))
		make_access_error("SAM_Levpartflip", "analysis_period");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_batt_salvage_percentage_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_salvage_percentage", &result))
		make_access_error("SAM_Levpartflip", "batt_salvage_percentage");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_cost_debt_closing_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_debt_closing", &result))
		make_access_error("SAM_Levpartflip", "cost_debt_closing");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_cost_debt_fee_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_debt_fee", &result))
		make_access_error("SAM_Levpartflip", "cost_debt_fee");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_cost_other_financing_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_other_financing", &result))
		make_access_error("SAM_Levpartflip", "cost_other_financing");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_debt_option_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "debt_option", &result))
		make_access_error("SAM_Levpartflip", "debt_option");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_debt_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "debt_percent", &result))
		make_access_error("SAM_Levpartflip", "debt_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_dscr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dscr", &result))
		make_access_error("SAM_Levpartflip", "dscr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_dscr_reserve_months_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dscr_reserve_months", &result))
		make_access_error("SAM_Levpartflip", "dscr_reserve_months");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip1_reserve_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip1_reserve_cost", &result))
		make_access_error("SAM_Levpartflip", "equip1_reserve_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip1_reserve_freq_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip1_reserve_freq", &result))
		make_access_error("SAM_Levpartflip", "equip1_reserve_freq");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip2_reserve_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip2_reserve_cost", &result))
		make_access_error("SAM_Levpartflip", "equip2_reserve_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip2_reserve_freq_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip2_reserve_freq", &result))
		make_access_error("SAM_Levpartflip", "equip2_reserve_freq");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip3_reserve_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip3_reserve_cost", &result))
		make_access_error("SAM_Levpartflip", "equip3_reserve_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip3_reserve_freq_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip3_reserve_freq", &result))
		make_access_error("SAM_Levpartflip", "equip3_reserve_freq");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip_reserve_depr_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip_reserve_depr_fed", &result))
		make_access_error("SAM_Levpartflip", "equip_reserve_depr_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_equip_reserve_depr_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "equip_reserve_depr_sta", &result))
		make_access_error("SAM_Levpartflip", "equip_reserve_depr_sta");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_FinancialParameters_federal_tax_rate_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "federal_tax_rate", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "federal_tax_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_inflation_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "inflation_rate", &result))
		make_access_error("SAM_Levpartflip", "inflation_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_insurance_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "insurance_rate", &result))
		make_access_error("SAM_Levpartflip", "insurance_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_months_receivables_reserve_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "months_receivables_reserve", &result))
		make_access_error("SAM_Levpartflip", "months_receivables_reserve");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_months_working_reserve_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "months_working_reserve", &result))
		make_access_error("SAM_Levpartflip", "months_working_reserve");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_payment_option_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "payment_option", &result))
		make_access_error("SAM_Levpartflip", "payment_option");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_prop_tax_assessed_decline_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "prop_tax_assessed_decline", &result))
		make_access_error("SAM_Levpartflip", "prop_tax_assessed_decline");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_prop_tax_cost_assessed_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "prop_tax_cost_assessed_percent", &result))
		make_access_error("SAM_Levpartflip", "prop_tax_cost_assessed_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_property_tax_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "property_tax_rate", &result))
		make_access_error("SAM_Levpartflip", "property_tax_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_real_discount_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "real_discount_rate", &result))
		make_access_error("SAM_Levpartflip", "real_discount_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_reserves_interest_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "reserves_interest", &result))
		make_access_error("SAM_Levpartflip", "reserves_interest");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_salvage_percentage_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "salvage_percentage", &result))
		make_access_error("SAM_Levpartflip", "salvage_percentage");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_FinancialParameters_state_tax_rate_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "state_tax_rate", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "state_tax_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_system_capacity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_Levpartflip", "system_capacity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_system_heat_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_heat_rate", &result))
		make_access_error("SAM_Levpartflip", "system_heat_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_term_int_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "term_int_rate", &result))
		make_access_error("SAM_Levpartflip", "term_int_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_FinancialParameters_term_tenor_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "term_tenor", &result))
		make_access_error("SAM_Levpartflip", "term_tenor");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_add_om_num_types_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "add_om_num_types", &result))
		make_access_error("SAM_Levpartflip", "add_om_num_types");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_annual_fuel_usage_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "annual_fuel_usage", &result))
		make_access_error("SAM_Levpartflip", "annual_fuel_usage");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_annual_fuel_usage_lifetime_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "annual_fuel_usage_lifetime", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "annual_fuel_usage_lifetime");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_fuelcell_annual_energy_discharged_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "fuelcell_annual_energy_discharged", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "fuelcell_annual_energy_discharged");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_batt_capacity_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_batt_capacity_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_batt_capacity_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_batt_fixed_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_batt_fixed_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_batt_fixed_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_batt_nameplate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_batt_nameplate", &result))
		make_access_error("SAM_Levpartflip", "om_batt_nameplate");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_batt_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_batt_replacement_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_batt_replacement_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_batt_variable_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_batt_variable_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_batt_variable_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_capacity_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_capacity", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_capacity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_capacity_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_capacity_escal", &result))
		make_access_error("SAM_Levpartflip", "om_capacity_escal");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_fixed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fixed", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_fixed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_fixed_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_fixed_escal", &result))
		make_access_error("SAM_Levpartflip", "om_fixed_escal");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_fuel_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fuel_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_fuel_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_fuel_cost_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_fuel_cost_escal", &result))
		make_access_error("SAM_Levpartflip", "om_fuel_cost_escal");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_fuelcell_capacity_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fuelcell_capacity_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_fuelcell_capacity_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_fuelcell_fixed_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fuelcell_fixed_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_fuelcell_fixed_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_fuelcell_nameplate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_fuelcell_nameplate", &result))
		make_access_error("SAM_Levpartflip", "om_fuelcell_nameplate");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_fuelcell_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fuelcell_replacement_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_fuelcell_replacement_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_fuelcell_variable_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_fuelcell_variable_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_fuelcell_variable_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_opt_fuel_1_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_opt_fuel_1_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_opt_fuel_1_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_opt_fuel_1_cost_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_opt_fuel_1_cost_escal", &result))
		make_access_error("SAM_Levpartflip", "om_opt_fuel_1_cost_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_opt_fuel_1_usage_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_opt_fuel_1_usage", &result))
		make_access_error("SAM_Levpartflip", "om_opt_fuel_1_usage");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_opt_fuel_2_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_opt_fuel_2_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_opt_fuel_2_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_opt_fuel_2_cost_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_opt_fuel_2_cost_escal", &result))
		make_access_error("SAM_Levpartflip", "om_opt_fuel_2_cost_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_opt_fuel_2_usage_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_opt_fuel_2_usage", &result))
		make_access_error("SAM_Levpartflip", "om_opt_fuel_2_usage");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_production_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_production", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_production");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_production1_values_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_production1_values", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_production1_values");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemCosts_om_production2_values_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "om_production2_values", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "om_production2_values");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_production_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_production_escal", &result))
		make_access_error("SAM_Levpartflip", "om_production_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_om_replacement_cost_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "om_replacement_cost_escal", &result))
		make_access_error("SAM_Levpartflip", "om_replacement_cost_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemCosts_total_installed_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "total_installed_cost", &result))
		make_access_error("SAM_Levpartflip", "total_installed_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_amount", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_amount_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_amount_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_amount_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_amount_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_percent", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_percent_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_percent_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_percent_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_percent_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_fed_percent_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_percent_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_percent_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_amount", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_amount_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_amount_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_amount_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_amount_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_percent", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_percent_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_percent_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_percent_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_percent_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_itc_sta_percent_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_percent_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_percent_maxvalue");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_TaxCreditIncentives_ptc_fed_amount_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ptc_fed_amount", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "ptc_fed_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_ptc_fed_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ptc_fed_escal", &result))
		make_access_error("SAM_Levpartflip", "ptc_fed_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_ptc_fed_term_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ptc_fed_term", &result))
		make_access_error("SAM_Levpartflip", "ptc_fed_term");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_TaxCreditIncentives_ptc_sta_amount_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ptc_sta_amount", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "ptc_sta_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_ptc_sta_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ptc_sta_escal", &result))
		make_access_error("SAM_Levpartflip", "ptc_sta_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TaxCreditIncentives_ptc_sta_term_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ptc_sta_term", &result))
		make_access_error("SAM_Levpartflip", "ptc_sta_term");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_custom_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_custom_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_custom_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_macrs_15_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_macrs_15_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_macrs_15_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_macrs_5_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_macrs_5_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_macrs_5_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_sl_15_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_15_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_15_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_sl_20_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_20_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_20_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_sl_39_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_39_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_39_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_alloc_sl_5_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_5_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_5_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_fed_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_fed_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_fed_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_bonus_sta_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_bonus_sta_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_bonus_sta_sl_5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Depreciation_depr_custom_schedule_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "depr_custom_schedule", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "depr_custom_schedule");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_fedbas_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_method", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_method");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_fed_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_fed_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_fed_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_itc_sta_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_itc_sta_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_itc_sta_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Depreciation_depr_stabas_method_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_method", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_method");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_fed_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fed_amount", &result))
		make_access_error("SAM_Levpartflip", "cbi_fed_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_fed_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fed_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_fed_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_fed_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fed_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_fed_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_fed_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fed_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "cbi_fed_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_fed_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fed_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_fed_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_fed_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fed_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_fed_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_oth_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_oth_amount", &result))
		make_access_error("SAM_Levpartflip", "cbi_oth_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_oth_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_oth_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_oth_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_oth_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_oth_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_oth_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_oth_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_oth_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "cbi_oth_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_oth_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_oth_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_oth_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_oth_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_oth_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_oth_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_sta_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_sta_amount", &result))
		make_access_error("SAM_Levpartflip", "cbi_sta_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_sta_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_sta_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_sta_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_sta_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_sta_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_sta_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_sta_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_sta_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "cbi_sta_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_sta_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_sta_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_sta_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_sta_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_sta_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_sta_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_uti_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_uti_amount", &result))
		make_access_error("SAM_Levpartflip", "cbi_uti_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_uti_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_uti_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_uti_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_uti_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_uti_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_uti_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_uti_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_uti_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "cbi_uti_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_uti_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_uti_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_uti_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_cbi_uti_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_uti_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_uti_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_amount", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_amount_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_amount_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_amount_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_amount_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_amount_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_amount_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_amount_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_amount_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_amount_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_percent", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_percent_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_percent_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_percent_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_percent_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_percent_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_percent_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_percent_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_percent_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_fed_percent_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fed_percent_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_fed_percent_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_amount", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_amount_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_amount_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_amount_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_amount_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_amount_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_amount_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_amount_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_amount_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_amount_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_percent", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_percent_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_percent_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_percent_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_percent_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_percent_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_percent_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_percent_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_percent_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_oth_percent_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_oth_percent_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_oth_percent_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_amount", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_amount_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_amount_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_amount_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_amount_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_amount_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_amount_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_amount_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_amount_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_amount_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_percent", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_percent_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_percent_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_percent_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_percent_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_percent_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_percent_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_percent_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_percent_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_sta_percent_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_sta_percent_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_sta_percent_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_amount", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_amount_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_amount_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_amount_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_amount_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_amount_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_amount_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_amount_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_amount_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_amount_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_percent", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_deprbas_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_percent_deprbas_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_percent_deprbas_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_deprbas_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_percent_deprbas_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_percent_deprbas_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_maxvalue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_percent_maxvalue", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_percent_maxvalue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_percent_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_percent_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_ibi_uti_percent_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_uti_percent_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_uti_percent_tax_sta");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_PaymentIncentives_pbi_fed_amount_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pbi_fed_amount", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "pbi_fed_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_fed_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_fed_escal", &result))
		make_access_error("SAM_Levpartflip", "pbi_fed_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_fed_for_ds_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_fed_for_ds", &result))
		make_access_error("SAM_Levpartflip", "pbi_fed_for_ds");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_fed_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_fed_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "pbi_fed_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_fed_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_fed_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "pbi_fed_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_fed_term_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_fed_term", &result))
		make_access_error("SAM_Levpartflip", "pbi_fed_term");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_PaymentIncentives_pbi_oth_amount_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pbi_oth_amount", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "pbi_oth_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_oth_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_oth_escal", &result))
		make_access_error("SAM_Levpartflip", "pbi_oth_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_oth_for_ds_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_oth_for_ds", &result))
		make_access_error("SAM_Levpartflip", "pbi_oth_for_ds");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_oth_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_oth_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "pbi_oth_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_oth_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_oth_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "pbi_oth_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_oth_term_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_oth_term", &result))
		make_access_error("SAM_Levpartflip", "pbi_oth_term");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_PaymentIncentives_pbi_sta_amount_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pbi_sta_amount", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "pbi_sta_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_sta_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_sta_escal", &result))
		make_access_error("SAM_Levpartflip", "pbi_sta_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_sta_for_ds_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_sta_for_ds", &result))
		make_access_error("SAM_Levpartflip", "pbi_sta_for_ds");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_sta_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_sta_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "pbi_sta_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_sta_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_sta_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "pbi_sta_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_sta_term_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_sta_term", &result))
		make_access_error("SAM_Levpartflip", "pbi_sta_term");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_PaymentIncentives_pbi_uti_amount_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "pbi_uti_amount", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "pbi_uti_amount");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_uti_escal_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_uti_escal", &result))
		make_access_error("SAM_Levpartflip", "pbi_uti_escal");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_uti_for_ds_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_uti_for_ds", &result))
		make_access_error("SAM_Levpartflip", "pbi_uti_for_ds");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_uti_tax_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_uti_tax_fed", &result))
		make_access_error("SAM_Levpartflip", "pbi_uti_tax_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_uti_tax_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_uti_tax_sta", &result))
		make_access_error("SAM_Levpartflip", "pbi_uti_tax_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_PaymentIncentives_pbi_uti_term_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pbi_uti_term", &result))
		make_access_error("SAM_Levpartflip", "pbi_uti_term");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemOutput_degradation_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "degradation", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "degradation");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_SystemOutput_gen_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "gen", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "gen");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_SystemOutput_system_capacity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_capacity", &result))
		make_access_error("SAM_Levpartflip", "system_capacity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Moratorium_loan_moratorium_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "loan_moratorium", &result))
		make_access_error("SAM_Levpartflip", "loan_moratorium");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Recapitalization_system_lifetime_recapitalize_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "system_lifetime_recapitalize", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "system_lifetime_recapitalize");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Recapitalization_system_recapitalization_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_recapitalization_cost", &result))
		make_access_error("SAM_Levpartflip", "system_recapitalization_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Recapitalization_system_recapitalization_escalation_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_recapitalization_escalation", &result))
		make_access_error("SAM_Levpartflip", "system_recapitalization_escalation");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Recapitalization_system_use_recapitalization_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_recapitalization", &result))
		make_access_error("SAM_Levpartflip", "system_use_recapitalization");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor1", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor1");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor2_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor2", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor2");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor3_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor3", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor3");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor4_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor4", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor4");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor5", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor6_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor6", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor6");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor7_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor7", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor7");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor8_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor8", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor8");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_dispatch_factor9_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "dispatch_factor9", &result))
		make_access_error("SAM_Levpartflip", "dispatch_factor9");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_TimeOfDelivery_dispatch_factors_ts_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "dispatch_factors_ts", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "dispatch_factors_ts");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_TimeOfDelivery_dispatch_sched_weekday_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "dispatch_sched_weekday", nrows, ncols);
	if (!result)
		make_access_error("SAM_Levpartflip", "dispatch_sched_weekday");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_TimeOfDelivery_dispatch_sched_weekend_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "dispatch_sched_weekend", nrows, ncols);
	if (!result)
		make_access_error("SAM_Levpartflip", "dispatch_sched_weekend");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_ppa_multiplier_model_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_multiplier_model", &result))
		make_access_error("SAM_Levpartflip", "ppa_multiplier_model");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_TimeOfDelivery_system_use_lifetime_output_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "system_use_lifetime_output", &result))
		make_access_error("SAM_Levpartflip", "system_use_lifetime_output");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_ConstructionFinancing_construction_financing_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "construction_financing_cost", &result))
		make_access_error("SAM_Levpartflip", "construction_financing_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_OtherCapitalCosts_cost_dev_fee_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_dev_fee_percent", &result))
		make_access_error("SAM_Levpartflip", "cost_dev_fee_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_OtherCapitalCosts_cost_equity_closing_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_equity_closing", &result))
		make_access_error("SAM_Levpartflip", "cost_equity_closing");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_IRRTargets_tax_investor_equity_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_equity_percent", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_equity_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_IRRTargets_tax_investor_postflip_cash_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_postflip_cash_percent", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_postflip_cash_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_IRRTargets_tax_investor_postflip_tax_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_postflip_tax_percent", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_postflip_tax_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_IRRTargets_tax_investor_preflip_cash_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_preflip_cash_percent", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_preflip_cash_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_IRRTargets_tax_investor_preflip_tax_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_preflip_tax_percent", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_preflip_tax_percent");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_batt_annual_charge_from_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_charge_from_system", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "batt_annual_charge_from_system");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_batt_annual_discharge_energy_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_annual_discharge_energy", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "batt_annual_discharge_energy");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_batt_capacity_percent_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_capacity_percent", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "batt_capacity_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Battery_battery_total_cost_lcos_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "battery_total_cost_lcos", &result))
		make_access_error("SAM_Levpartflip", "battery_total_cost_lcos");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_grid_to_batt_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "grid_to_batt", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "grid_to_batt");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_monthly_batt_to_grid_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_batt_to_grid", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "monthly_batt_to_grid");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_monthly_grid_to_batt_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_grid_to_batt", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "monthly_grid_to_batt");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_monthly_grid_to_load_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_grid_to_load", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "monthly_grid_to_load");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Battery_monthly_system_to_grid_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "monthly_system_to_grid", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "monthly_system_to_grid");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_ChargesByMonth_charge_w_sys_ec_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "charge_w_sys_ec_ym", nrows, ncols);
	if (!result)
		make_access_error("SAM_Levpartflip", "charge_w_sys_ec_ym");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_ChargesByMonth_true_up_credits_ym_mget(SAM_table ptr, int* nrows, int* ncols, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_matrix(ptr, "true_up_credits_ym", nrows, ncols);
	if (!result)
		make_access_error("SAM_Levpartflip", "true_up_credits_ym");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_ChargesByMonth_year1_monthly_ec_charge_with_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "year1_monthly_ec_charge_with_system", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "year1_monthly_ec_charge_with_system");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Monthly_year1_monthly_ec_charge_gross_with_system_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "year1_monthly_ec_charge_gross_with_system", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "year1_monthly_ec_charge_gross_with_system");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Monthly_year1_monthly_electricity_to_grid_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "year1_monthly_electricity_to_grid", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "year1_monthly_electricity_to_grid");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_BatterySystem_batt_bank_replacement_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_bank_replacement", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "batt_bank_replacement");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_BatterySystem_batt_computed_bank_capacity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_computed_bank_capacity", &result))
		make_access_error("SAM_Levpartflip", "batt_computed_bank_capacity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_BatterySystem_batt_replacement_option_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "batt_replacement_option", &result))
		make_access_error("SAM_Levpartflip", "batt_replacement_option");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_BatterySystem_batt_replacement_schedule_percent_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "batt_replacement_schedule_percent", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "batt_replacement_schedule_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_BatterySystem_battery_per_kWh_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "battery_per_kWh", &result))
		make_access_error("SAM_Levpartflip", "battery_per_kWh");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_BatterySystem_en_batt_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "en_batt", &result))
		make_access_error("SAM_Levpartflip", "en_batt");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_adjusted_installed_cost_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "adjusted_installed_cost", &result))
		make_access_error("SAM_Levpartflip", "adjusted_installed_cost");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_analysis_period_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "analysis_period_irr", &result))
		make_access_error("SAM_Levpartflip", "analysis_period_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cash_for_debt_service_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cash_for_debt_service", &result))
		make_access_error("SAM_Levpartflip", "cash_for_debt_service");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_fedtax_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_fedtax_total", &result))
		make_access_error("SAM_Levpartflip", "cbi_fedtax_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_statax_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_statax_total", &result))
		make_access_error("SAM_Levpartflip", "cbi_statax_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_total", &result))
		make_access_error("SAM_Levpartflip", "cbi_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_total_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_total_fed", &result))
		make_access_error("SAM_Levpartflip", "cbi_total_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_total_oth_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_total_oth", &result))
		make_access_error("SAM_Levpartflip", "cbi_total_oth");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_total_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_total_sta", &result))
		make_access_error("SAM_Levpartflip", "cbi_total_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cbi_total_uti_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cbi_total_uti", &result))
		make_access_error("SAM_Levpartflip", "cbi_total_uti");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_annual_cost_lcos_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_annual_cost_lcos", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_annual_cost_lcos");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_annual_discharge_lcos_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_annual_discharge_lcos", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_annual_discharge_lcos");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_batt_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_batt_replacement_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_batt_replacement_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_battery_replacement_cost_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_battery_replacement_cost", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_battery_replacement_cost");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_battery_replacement_cost_schedule_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_battery_replacement_cost_schedule", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_battery_replacement_cost_schedule");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_cash_for_ds_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_cash_for_ds", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_cash_for_ds");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_charging_cost_grid_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_charging_cost_grid", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_charging_cost_grid");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_charging_cost_grid_month_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_charging_cost_grid_month", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_charging_cost_grid_month");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_charging_cost_pv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_charging_cost_pv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_charging_cost_pv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_debt_balance_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_debt_balance", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_debt_balance");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_debt_payment_interest_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_debt_payment_interest", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_debt_payment_interest");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_debt_payment_principal_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_debt_payment_principal", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_debt_payment_principal");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_debt_payment_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_debt_payment_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_debt_payment_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_debt_size_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_debt_size", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_debt_size");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_disbursement_debtservice_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_disbursement_debtservice", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_disbursement_debtservice");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_disbursement_equip1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_disbursement_equip1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_disbursement_equip1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_disbursement_equip2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_disbursement_equip2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_disbursement_equip2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_disbursement_equip3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_disbursement_equip3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_disbursement_equip3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_disbursement_om_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_disbursement_om", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_disbursement_om");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_disbursement_receivables_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_disbursement_receivables", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_disbursement_receivables");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_ebitda_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_ebitda", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_ebitda");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_effective_tax_frac_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_effective_tax_frac", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_effective_tax_frac");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_apr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_apr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_apr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_aug_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_aug", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_aug");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dec_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dec", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dec");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch4_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch4", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch4");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch6_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch6", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch6");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch7_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch7", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch7");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch8_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch8", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch8");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_dispatch9_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_dispatch9", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_dispatch9");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_feb_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_feb", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_feb");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_jan_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_jan", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_jan");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_jul_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_jul", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_jul");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_jun_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_jun", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_jun");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_mar_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_mar", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_mar");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_may_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_may", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_may");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD4_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD4", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD4");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD6_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD6", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD6");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD7_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD7", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD7");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD8_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD8", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD8");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_monthly_firstyear_TOD9_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_monthly_firstyear_TOD9", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_monthly_firstyear_TOD9");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_nov_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_nov", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_nov");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_oct_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_oct", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_oct");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_net_sep_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_net_sep", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_net_sep");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_energy_value_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_energy_value", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_energy_value");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_custom_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_custom", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_custom");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_macrs_15_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_macrs_15", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_macrs_15");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_macrs_5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_macrs_5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_macrs_5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_me1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_me1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_me1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_me2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_me2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_me2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_me3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_me3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_me3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_sl_15_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_sl_15", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_sl_15");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_sl_20_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_sl_20", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_sl_20");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_sl_39_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_sl_39", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_sl_39");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_sl_5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_sl_5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_sl_5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_feddepr_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_feddepr_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_feddepr_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_federal_tax_frac_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_federal_tax_frac", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_federal_tax_frac");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_fedtax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_fedtax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_fedtax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_fedtax_income_prior_incentives_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_fedtax_income_prior_incentives", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_fedtax_income_prior_incentives");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_fedtax_income_with_incentives_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_fedtax_income_with_incentives", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_fedtax_income_with_incentives");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_fedtax_taxable_incentives_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_fedtax_taxable_incentives", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_fedtax_taxable_incentives");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_funding_debtservice_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_funding_debtservice", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_funding_debtservice");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_funding_equip1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_funding_equip1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_funding_equip1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_funding_equip2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_funding_equip2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_funding_equip2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_funding_equip3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_funding_equip3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_funding_equip3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_funding_om_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_funding_om", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_funding_om");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_funding_receivables_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_funding_receivables", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_funding_receivables");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_insurance_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_insurance_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_insurance_expense");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cf_length_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cf_length", &result))
		make_access_error("SAM_Levpartflip", "cf_length");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_net_salvage_value_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_net_salvage_value", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_net_salvage_value");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_batt_capacity_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_batt_capacity_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_batt_capacity_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_batt_fixed_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_batt_fixed_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_batt_fixed_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_batt_production_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_batt_production_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_batt_production_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_capacity_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_capacity_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_capacity_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_fixed_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_fixed_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_fixed_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_fuel_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_fuel_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_fuel_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_opt_fuel_1_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_opt_fuel_1_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_opt_fuel_1_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_opt_fuel_2_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_opt_fuel_2_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_opt_fuel_2_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_om_production_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_om_production_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_om_production_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_operating_expenses_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_operating_expenses", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_operating_expenses");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_fedtax_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_fedtax_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_fedtax_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_statax_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_statax_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_statax_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_total_fed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_total_fed", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_total_fed");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_total_oth_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_total_oth", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_total_oth");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_total_sta_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_total_sta", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_total_sta");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pbi_total_uti_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pbi_total_uti", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pbi_total_uti");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_ppa_price_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_ppa_price", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_ppa_price");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pretax_cashflow_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pretax_cashflow", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pretax_cashflow");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pretax_dscr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pretax_dscr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pretax_dscr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_dsra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_dsra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_dsra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_financing_activities_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_financing_activities", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_financing_activities");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_investing_activities_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_investing_activities", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_investing_activities");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_me1cs_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_me1cs", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_me1cs");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_me1ra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_me1ra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_me1ra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_me2cs_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_me2cs", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_me2cs");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_me2ra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_me2ra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_me2ra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_me3cs_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_me3cs", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_me3cs");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_me3ra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_me3ra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_me3ra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_mecs_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_mecs", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_mecs");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_operating_activities_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_operating_activities", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_operating_activities");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_ra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_ra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_ra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_receivablesra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_receivablesra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_receivablesra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_aftertax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_aftertax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_aftertax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_aftertax_cash_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_aftertax_cash", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_aftertax_cash");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_aftertax_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_aftertax_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_aftertax_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_aftertax_npv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_aftertax_npv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_aftertax_npv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_pretax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_pretax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_pretax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_pretax_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_pretax_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_pretax_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_return_pretax_npv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_return_pretax_npv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_return_pretax_npv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_project_wcra_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_project_wcra", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_project_wcra");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_property_tax_assessed_value_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_property_tax_assessed_value", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_property_tax_assessed_value");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_property_tax_expense_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_property_tax_expense", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_property_tax_expense");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_ptc_fed_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_ptc_fed", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_ptc_fed");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_ptc_sta_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_ptc_sta", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_ptc_sta");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_ptc_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_ptc_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_ptc_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pv_cash_for_ds_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pv_cash_for_ds", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pv_cash_for_ds");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_pv_interest_factor_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_pv_interest_factor", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_pv_interest_factor");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_recapitalization_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_recapitalization", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_recapitalization");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_debtservice_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_debtservice", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_debtservice");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_equip1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_equip1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_equip1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_equip2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_equip2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_equip2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_equip3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_equip3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_equip3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_interest_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_interest", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_interest");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_om_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_om", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_om");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_receivables_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_receivables", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_receivables");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_reserve_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_reserve_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_reserve_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_apr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_apr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_apr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_aug_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_aug", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_aug");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dec_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dec", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dec");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch4_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch4", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch4");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch6_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch6", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch6");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch7_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch7", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch7");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch8_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch8", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch8");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_dispatch9_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_dispatch9", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_dispatch9");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_feb_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_feb", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_feb");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_jan_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_jan", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_jan");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_jul_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_jul", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_jul");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_jun_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_jun", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_jun");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_mar_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_mar", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_mar");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_may_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_may", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_may");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD4_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD4", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD4");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD6_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD6", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD6");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD7_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD7", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD7");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD8_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD8", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD8");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_monthly_firstyear_TOD9_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_monthly_firstyear_TOD9", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_monthly_firstyear_TOD9");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_nov_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_nov", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_nov");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_oct_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_oct", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_oct");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_revenue_sep_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_revenue_sep", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_revenue_sep");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_salvage_cost_lcos_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_salvage_cost_lcos", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_salvage_cost_lcos");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_cash_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax_cash", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax_cash");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_itc_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax_itc", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax_itc");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_npv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax_npv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax_npv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_ptc_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax_ptc", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax_ptc");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_aftertax_tax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_aftertax_tax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_aftertax_tax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_pretax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_pretax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_pretax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_pretax_cash_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_pretax_cash", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_pretax_cash");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_pretax_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_pretax_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_pretax_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_sponsor_pretax_npv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_sponsor_pretax_npv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_sponsor_pretax_npv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_custom_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_custom", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_custom");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_macrs_15_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_macrs_15", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_macrs_15");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_macrs_5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_macrs_5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_macrs_5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_me1_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_me1", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_me1");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_me2_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_me2", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_me2");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_me3_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_me3", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_me3");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_sl_15_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_sl_15", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_sl_15");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_sl_20_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_sl_20", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_sl_20");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_sl_39_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_sl_39", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_sl_39");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_sl_5_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_sl_5", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_sl_5");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_stadepr_total_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_stadepr_total", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_stadepr_total");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_statax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_statax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_statax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_statax_income_prior_incentives_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_statax_income_prior_incentives", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_statax_income_prior_incentives");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_statax_income_with_incentives_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_statax_income_with_incentives", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_statax_income_with_incentives");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_statax_taxable_incentives_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_statax_taxable_incentives", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_statax_taxable_incentives");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_state_tax_frac_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_state_tax_frac", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_state_tax_frac");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_cash_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_cash", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_cash");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_itc_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_itc", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_itc");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_max_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_max_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_max_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_npv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_npv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_npv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_ptc_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_ptc", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_ptc");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_aftertax_tax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_aftertax_tax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_aftertax_tax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_pretax_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_pretax", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_pretax");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_pretax_irr_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_pretax_irr", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_pretax_irr");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_tax_investor_pretax_npv_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_tax_investor_pretax_npv", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_tax_investor_pretax_npv");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_cf_total_revenue_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "cf_total_revenue", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "cf_total_revenue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cost_debt_upfront_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_debt_upfront", &result))
		make_access_error("SAM_Levpartflip", "cost_debt_upfront");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cost_financing_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_financing", &result))
		make_access_error("SAM_Levpartflip", "cost_financing");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cost_installed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_installed", &result))
		make_access_error("SAM_Levpartflip", "cost_installed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cost_installedperwatt_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_installedperwatt", &result))
		make_access_error("SAM_Levpartflip", "cost_installedperwatt");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_cost_prefinancing_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "cost_prefinancing", &result))
		make_access_error("SAM_Levpartflip", "cost_prefinancing");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_debt_fraction_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "debt_fraction", &result))
		make_access_error("SAM_Levpartflip", "debt_fraction");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_none_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_none", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_none");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_none_percent_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_none_percent", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_none_percent");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_alloc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_alloc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_alloc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_after_itc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_after_itc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_after_itc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_cbi_reduc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_cbi_reduc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_cbi_reduc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_first_year_bonus_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_first_year_bonus_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_first_year_bonus_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_fixed_amount_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_fixed_amount_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_fixed_amount_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_ibi_reduc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_ibi_reduc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_ibi_reduc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_fed_reduction_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_fed_reduction_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_fed_reduction_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_itc_sta_reduction_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_itc_sta_reduction_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_itc_sta_reduction_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_amount_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_amount_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_amount_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_qual_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_qual_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_qual_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_percent_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_percent_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_percent_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_prior_itc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_prior_itc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_prior_itc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_fedbas_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_fedbas_total", &result))
		make_access_error("SAM_Levpartflip", "depr_fedbas_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_after_itc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_after_itc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_after_itc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_cbi_reduc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_cbi_reduc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_cbi_reduc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_first_year_bonus_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_first_year_bonus_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_first_year_bonus_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_fixed_amount_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_fixed_amount_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_fixed_amount_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_ibi_reduc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_ibi_reduc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_ibi_reduc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_fed_reduction_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_fed_reduction_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_fed_reduction_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_itc_sta_reduction_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_itc_sta_reduction_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_itc_sta_reduction_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_amount_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_amount_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_amount_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_qual_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_qual_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_qual_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_percent_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_percent_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_percent_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_custom", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_prior_itc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_prior_itc_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_prior_itc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_sl_15", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_sl_20", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_sl_39", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_sl_5", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_depr_stabas_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "depr_stabas_total", &result))
		make_access_error("SAM_Levpartflip", "depr_stabas_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_effective_tax_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "effective_tax_rate", &result))
		make_access_error("SAM_Levpartflip", "effective_tax_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch1", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch1");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch2_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch2", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch2");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch3_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch3", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch3");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch4_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch4", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch4");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch5", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch6_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch6", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch6");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch7_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch7", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch7");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch8_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch8", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch8");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_dispatch9_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_dispatch9", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_dispatch9");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price1", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price1");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price2_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price2", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price2");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price3_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price3", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price3");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price4_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price4", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price4");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price5", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price6_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price6", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price6");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price7_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price7", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price7");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price8_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price8", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price8");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_energy_price9_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_energy_price9", &result))
		make_access_error("SAM_Levpartflip", "firstyear_energy_price9");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch1_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch1", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch1");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch2_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch2", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch2");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch3_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch3", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch3");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch4_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch4", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch4");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch5", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch6_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch6", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch6");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch7_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch7", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch7");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch8_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch8", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch8");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_firstyear_revenue_dispatch9_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "firstyear_revenue_dispatch9", &result))
		make_access_error("SAM_Levpartflip", "firstyear_revenue_dispatch9");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_flip_actual_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "flip_actual_irr", &result))
		make_access_error("SAM_Levpartflip", "flip_actual_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_flip_actual_year_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "flip_actual_year", &result))
		make_access_error("SAM_Levpartflip", "flip_actual_year");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_flip_target_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "flip_target_irr", &result))
		make_access_error("SAM_Levpartflip", "flip_target_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_flip_target_year_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "flip_target_year", &result))
		make_access_error("SAM_Levpartflip", "flip_target_year");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_fedtax_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_fedtax_total", &result))
		make_access_error("SAM_Levpartflip", "ibi_fedtax_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_statax_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_statax_total", &result))
		make_access_error("SAM_Levpartflip", "ibi_statax_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_total", &result))
		make_access_error("SAM_Levpartflip", "ibi_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_total_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_total_fed", &result))
		make_access_error("SAM_Levpartflip", "ibi_total_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_total_oth_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_total_oth", &result))
		make_access_error("SAM_Levpartflip", "ibi_total_oth");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_total_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_total_sta", &result))
		make_access_error("SAM_Levpartflip", "ibi_total_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ibi_total_uti_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ibi_total_uti", &result))
		make_access_error("SAM_Levpartflip", "ibi_total_uti");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_issuance_of_equity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "issuance_of_equity", &result))
		make_access_error("SAM_Levpartflip", "issuance_of_equity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_custom", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_sl_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_sl_20", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_sl_39", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_sl_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_fixed_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_fixed_total", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_fixed_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_custom", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_sl_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_sl_20", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_sl_39", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_sl_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_fed_percent_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_fed_percent_total", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_fed_percent_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_custom", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_sl_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_sl_20", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_sl_39", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_sl_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_fixed_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_fixed_total", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_fixed_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_custom", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_sl_15", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_sl_20", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_sl_39", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_sl_5", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_disallow_sta_percent_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_disallow_sta_percent_total", &result))
		make_access_error("SAM_Levpartflip", "itc_disallow_sta_percent_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_fixed_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_fixed_total", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_fixed_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_percent_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_percent_total", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_percent_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_custom", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_sl_15", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_sl_20", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_sl_39", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_sl_5", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_fed_qual_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_fed_qual_total", &result))
		make_access_error("SAM_Levpartflip", "itc_fed_qual_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_fixed_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_fixed_total", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_fixed_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_percent_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_percent_total", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_percent_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_custom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_custom", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_custom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_macrs_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_macrs_15", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_macrs_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_macrs_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_macrs_5", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_macrs_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_sl_15_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_sl_15", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_sl_15");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_sl_20_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_sl_20", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_sl_20");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_sl_39_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_sl_39", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_sl_39");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_sl_5_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_sl_5", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_sl_5");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_sta_qual_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_sta_qual_total", &result))
		make_access_error("SAM_Levpartflip", "itc_sta_qual_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_total_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_total", &result))
		make_access_error("SAM_Levpartflip", "itc_total");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_total_fed_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_total_fed", &result))
		make_access_error("SAM_Levpartflip", "itc_total_fed");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_itc_total_sta_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "itc_total_sta", &result))
		make_access_error("SAM_Levpartflip", "itc_total_sta");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcoe_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcoe_nom", &result))
		make_access_error("SAM_Levpartflip", "lcoe_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcoe_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcoe_real", &result))
		make_access_error("SAM_Levpartflip", "lcoe_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcoptc_fed_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcoptc_fed_nom", &result))
		make_access_error("SAM_Levpartflip", "lcoptc_fed_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcoptc_fed_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcoptc_fed_real", &result))
		make_access_error("SAM_Levpartflip", "lcoptc_fed_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcoptc_sta_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcoptc_sta_nom", &result))
		make_access_error("SAM_Levpartflip", "lcoptc_sta_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcoptc_sta_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcoptc_sta_real", &result))
		make_access_error("SAM_Levpartflip", "lcoptc_sta_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcos_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcos_nom", &result))
		make_access_error("SAM_Levpartflip", "lcos_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lcos_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lcos_real", &result))
		make_access_error("SAM_Levpartflip", "lcos_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lppa_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lppa_nom", &result))
		make_access_error("SAM_Levpartflip", "lppa_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_lppa_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "lppa_real", &result))
		make_access_error("SAM_Levpartflip", "lppa_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_min_dscr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "min_dscr", &result))
		make_access_error("SAM_Levpartflip", "min_dscr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_nominal_discount_rate_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "nominal_discount_rate", &result))
		make_access_error("SAM_Levpartflip", "nominal_discount_rate");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_annual_costs_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_annual_costs", &result))
		make_access_error("SAM_Levpartflip", "npv_annual_costs");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_annual_costs_lcos_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_annual_costs_lcos", &result))
		make_access_error("SAM_Levpartflip", "npv_annual_costs_lcos");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_energy_lcos_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_energy_lcos_nom", &result))
		make_access_error("SAM_Levpartflip", "npv_energy_lcos_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_energy_lcos_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_energy_lcos_real", &result))
		make_access_error("SAM_Levpartflip", "npv_energy_lcos_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_energy_nom_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_energy_nom", &result))
		make_access_error("SAM_Levpartflip", "npv_energy_nom");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_energy_real_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_energy_real", &result))
		make_access_error("SAM_Levpartflip", "npv_energy_real");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_npv_ppa_revenue_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "npv_ppa_revenue", &result))
		make_access_error("SAM_Levpartflip", "npv_ppa_revenue");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ppa_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa", &result))
		make_access_error("SAM_Levpartflip", "ppa");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ppa_escalation_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_escalation", &result))
		make_access_error("SAM_Levpartflip", "ppa_escalation");
	});
	return result;
}



SAM_EXPORT double* SAM_Levpartflip_Outputs_ppa_multipliers_aget(SAM_table ptr, int* length, SAM_error *err){
	double* result = nullptr;
	translateExceptions(err, [&]{
	result = ssc_data_get_array(ptr, "ppa_multipliers", length);
	if (!result)
		make_access_error("SAM_Levpartflip", "ppa_multipliers");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_ppa_price_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "ppa_price", &result))
		make_access_error("SAM_Levpartflip", "ppa_price");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_present_value_fuel_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "present_value_fuel", &result))
		make_access_error("SAM_Levpartflip", "present_value_fuel");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_present_value_insandproptax_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "present_value_insandproptax", &result))
		make_access_error("SAM_Levpartflip", "present_value_insandproptax");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_present_value_oandm_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "present_value_oandm", &result))
		make_access_error("SAM_Levpartflip", "present_value_oandm");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_present_value_oandm_nonfuel_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "present_value_oandm_nonfuel", &result))
		make_access_error("SAM_Levpartflip", "present_value_oandm_nonfuel");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_prop_tax_assessed_value_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "prop_tax_assessed_value", &result))
		make_access_error("SAM_Levpartflip", "prop_tax_assessed_value");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_purchase_of_property_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "purchase_of_property", &result))
		make_access_error("SAM_Levpartflip", "purchase_of_property");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_pv_cafds_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "pv_cafds", &result))
		make_access_error("SAM_Levpartflip", "pv_cafds");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_salvage_value_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "salvage_value", &result))
		make_access_error("SAM_Levpartflip", "salvage_value");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_size_of_debt_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "size_of_debt", &result))
		make_access_error("SAM_Levpartflip", "size_of_debt");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_size_of_equity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "size_of_equity", &result))
		make_access_error("SAM_Levpartflip", "size_of_equity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_aftertax_development_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_aftertax_development", &result))
		make_access_error("SAM_Levpartflip", "sponsor_aftertax_development");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_aftertax_equity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_aftertax_equity", &result))
		make_access_error("SAM_Levpartflip", "sponsor_aftertax_equity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_aftertax_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_aftertax_irr", &result))
		make_access_error("SAM_Levpartflip", "sponsor_aftertax_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_aftertax_npv_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_aftertax_npv", &result))
		make_access_error("SAM_Levpartflip", "sponsor_aftertax_npv");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_pretax_development_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_pretax_development", &result))
		make_access_error("SAM_Levpartflip", "sponsor_pretax_development");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_pretax_equity_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_pretax_equity", &result))
		make_access_error("SAM_Levpartflip", "sponsor_pretax_equity");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_pretax_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_pretax_irr", &result))
		make_access_error("SAM_Levpartflip", "sponsor_pretax_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_sponsor_pretax_npv_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "sponsor_pretax_npv", &result))
		make_access_error("SAM_Levpartflip", "sponsor_pretax_npv");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_tax_investor_aftertax_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_aftertax_irr", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_aftertax_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_tax_investor_aftertax_npv_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_aftertax_npv", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_aftertax_npv");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_tax_investor_pretax_irr_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_pretax_irr", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_pretax_irr");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_tax_investor_pretax_npv_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "tax_investor_pretax_npv", &result))
		make_access_error("SAM_Levpartflip", "tax_investor_pretax_npv");
	});
	return result;
}



SAM_EXPORT double SAM_Levpartflip_Outputs_wacc_nget(SAM_table ptr, SAM_error *err){
	double result;
	translateExceptions(err, [&]{
	if (!ssc_data_get_number(ptr, "wacc", &result))
		make_access_error("SAM_Levpartflip", "wacc");
	});
	return result;
}



