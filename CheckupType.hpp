/**
 *
 * Edward Cruz, 02/10/2020
 * Lab_04 - CheckupType.hpp
 *
**/

#ifndef CHECKUPTYPE_HPP
#define CHECKUPTYPE_HPP

#include <iostream>
#include <string>

class CheckupType {
public:

    CheckupType();
    CheckupType(std::string pn, double sv, double dv, double lv, double hv);
    ~CheckupType();

    void set_patientNumber(std::string pn);
    std::string get_patientNumber();

    void set_systolicVal(double sv);
    double get_systolicVal();

    void set_diastolicVal(double dv);
    double get_diastolicVal();

    void set_ldlVal(double lv);
    double get_ldlVal();

    void set_hdlVal(double hv);
    double get_hdlVal();

    void computeRatio();
    void explainRatio();

private:
    std::string patientNumber;
    double      systolicValue;
    double      diastolicValue;
    double      LDLValue;
    double      HDLValue;
};

#endif /* CHECKUPTYPE_HPP */
