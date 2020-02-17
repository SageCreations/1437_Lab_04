/**
 * 
 * Edward Cruz, 02/10/2020
 * Lab_04 - CheckupType.cpp
 * 
**/

#include<iostream>
#include "CheckupType.h"


//************* CONSTRUCTOR *****************
Checkup::Checkup() {
    patientNumber = "0000";
    systolicValue = 0.0;
    diastolicValue = 0.0;
    LDLValue = 0.0;
    HDLValue = 0.0;
}
//**************** END ***********************

//************** COPY CONSTRUCTOR ***************
Checkup::Checkup(std::string pn, double sv, double dv, double lv, double hv) {
    patientNumber = pn;
    systolicValue = sv;
    diastolicValue = dv;
    LDLValue = lv;
    HDLValue = hv;
}
//***************** END ***************************

//************* DESTRUCTOR ***************************
Checkup::~Checkup() {
    delete &patientNumber;
    delete &systolicValue;
    delete &diastolicValue;
    delete &LDLValue;
    delete &HDLValue;
}
//***************** END *****************************

//*************** FUNCTIONS ***************************
void Checkup::computeRatio() {
    double ratio = LDLValue/HDLValue;
    std::cout << "The ratio is " << ratio << std::endl;
}

void Checkup::explainRatio() {
    std::cout << "Good cholesterol levels are values 3.5 or lower to " 
              << "be considered optimum." << std::endl;
}
//*************** END ******************************

//************** MUTATORS *********************
void Checkup::set_patientNumber(std::string pn) {
    patientNumber = pn;
}
void Checkup::set_systolicVal(double sv) {
    systolicValue = sv;
}
void Checkup::set_diastolicVal(double dv) {
    diastolicValue = dv;
}
void Checkup::set_ldlVal(double lv) {
    LDLValue = lv;
}
void Checkup::set_hdlVal(double hv) {
    HDLValue = hv;
}
//**************** END ***********************

//**************** ACCESSORS *******************
std::string Checkup::get_patientNumber() {
    return patientNumber;
}
double Checkup::get_systolicVal() {
    return systolicValue;
}
double Checkup::get_diastolicVal() {
    return diastolicValue;
}
double Checkup::get_ldlVal() {
    return LDLValue;
}
double Checkup::get_hdlVal() {
    return HDLValue;
}
//****************** END ************************