/**
 * 
 * Edward Cruz, 02/10/2020
 * Lab_04 - CheckupType.h
 * 
**/

#ifndef checkupType_H
#define checkupType_H

class Checkup {
private:
    std::string patientNumber;
    double      systolicValue;
    double      diastolicValue;
    double      LDLValue;
    double      HDLValue;

public:
    
    Checkup();
    Checkup(std::string pn, double sv, double dv, double lv, double hv);
    ~Checkup();

    void computeRatio();
    void explainRatio();
    
    void set_patientNumber(std::string pn);
    void set_systolicVal(double sv);
    void set_diastolicVal(double dv);
    void set_ldlVal(double lv);
    void set_hdlVal(double hv);

    std::string get_patientNumber();
    double      get_systolicVal();
    double      get_diastolicVal();
    double      get_ldlVal();
    double      get_hdlVal();
};

#endif