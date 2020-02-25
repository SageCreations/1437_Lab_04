/**
 * 
 * Edward Cruz, 02/10/2020
 * Lab_04 - CheckupType.cpp
 * 
**/

#include<iostream>
#include "CheckupType.hpp"


//************* CONSTRUCTOR *****************
CheckupType::CheckupType() {
    patientNumber = "0000";
    systolicValue = 0.0;
    diastolicValue = 0.0;
    LDLValue = 0.0;
    HDLValue = 0.0;
}
//**************** END ***********************

//************** COPY CONSTRUCTOR ***************
CheckupType::CheckupType(std::string pn, double sv, double dv, double lv, double hv) {
    patientNumber = pn;
    systolicValue = sv;
    diastolicValue = dv;
    LDLValue = lv;
    HDLValue = hv;
}
//***************** END ***************************

//************* DESTRUCTOR ***************************
CheckupType::~CheckupType() {
    delete &patientNumber;
    delete &systolicValue;
    delete &diastolicValue;
    delete &LDLValue;
    delete &HDLValue;
}
//***************** END *****************************

//*************** FUNCTIONS ***************************
void CheckupType::computeRatio() {
    double ratio = LDLValue/HDLValue;
    std::cout << "The ratio is " << ratio << std::endl;
}

void CheckupType::explainRatio() {
    std::cout << "Good cholesterol levels are values 3.5 or lower to " 
              << "be considered optimum." << std::endl;
}
//*************** END ******************************

//************** MUTATORS *********************
void CheckupType::set_patientNumber(std::string pn) {
    patientNumber = pn;
}
void CheckupType::set_systolicVal(double sv) {
    systolicValue = sv;
}
void CheckupType::set_diastolicVal(double dv) {
    diastolicValue = dv;
}
void CheckupType::set_ldlVal(double lv) {
    LDLValue = lv;
}
void CheckupType::set_hdlVal(double hv) {
    HDLValue = hv;
}
//**************** END ***********************

//**************** ACCESSORS *******************
std::string CheckupType::get_patientNumber() {
    return patientNumber;
}
double CheckupType::get_systolicVal() {
    return systolicValue;
}
double CheckupType::get_diastolicVal() {
    return diastolicValue;
}
double CheckupType::get_ldlVal() {
    return LDLValue;
}
double CheckupType::get_hdlVal() {
    return HDLValue;
}
//****************** END ************************