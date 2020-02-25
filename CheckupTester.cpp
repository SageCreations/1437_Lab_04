/**
 *
 * Edward Cruz, 02/10/2020
 * Lab_04 - CheckupTester.cpp
 *
**/

#include <iostream>
#include "CheckupType.cpp"
#include "CheckupTester.hpp"

CheckupTester::CheckupTester() {
    PatientOne = CheckupType();
    PatientTwo = CheckupType();
    PatientThree = CheckupType();
    PatientFour = CheckupType();
}

CheckupType CheckupTester::getData(CheckupType p) {
    std::string pn;
    double sv, dv, lv, hv;
    std::cout << "\n\nPlease enter the patient's number: ";
    std::cin  >> pn;
    p.set_patientNumber(pn);
    std::cout << "Please enter the systolic value: ";
    std::cin  >> sv;
    p.set_systolicVal(sv);
    std::cout << "Please enter the diastolic value: ";
    std::cin  >> dv;
    p.set_diastolicVal(dv);
    std::cout << "Please enter the LDL value: ";
    std::cin  >> lv;
    p.set_ldlVal(lv);
    std::cout << "Please enter the HDL value: ";
    std::cin  >> hv;
    p.set_hdlVal(hv);
    std::cout << std::endl;

    return p;
}

void CheckupTester::showValues(CheckupType p) {
    std::cout << "\n\nPatient number: " << p.get_patientNumber() << std::endl;
    std::cout << "Systolic over Diastolic value: " << p.get_systolicVal() << "/"
              << p.get_diastolicVal() << std::endl;
    std::cout << "Cholesterol level values: " << p.get_ldlVal() << "/"
              << p.get_hdlVal() << " - ";
    p.computeRatio();
    std::cout << std::endl;
    p.explainRatio();
}

CheckupType CheckupTester::get_p1() {
    return PatientOne;
}
CheckupType CheckupTester::get_p2() {
    return PatientTwo;
}
CheckupType CheckupTester::get_p3() {
    return PatientThree;
}
CheckupType CheckupTester::get_p4() {
    return PatientFour;
}

void CheckupTester::set_p1(CheckupType p) {
    PatientOne = p;
}
void CheckupTester::set_p2(CheckupType p) {
    PatientTwo = p;
}
void CheckupTester::set_p3(CheckupType p) {
    PatientThree = p;
}
void CheckupTester::set_p4(CheckupType p) {
    PatientFour = p;
}


int main() {

    CheckupTester t;

    t.set_p1(t.getData(t.get_p1()));
    t.set_p2(t.getData(t.get_p2()));
    t.set_p3(t.getData(t.get_p3()));
    t.set_p4(t.getData(t.get_p4()));

    std::cout << "\n\n\n\n";

    t.showValues(t.get_p1());
    t.showValues(t.get_p2());
    t.showValues(t.get_p3());
    t.showValues(t.get_p4());

    return 0;
}
