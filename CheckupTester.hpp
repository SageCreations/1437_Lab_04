//
//  CheckupTester.hpp
//  
//
//  Created by Bruce Gooch on 2/12/20.
//  Edited by Edward Cruz on 2/19/20.
//

#ifndef CheckupTester_hpp
#define CheckupTester_hpp

#include <iostream>
#include "CheckupType.hpp"
#include "CheckupType.cpp"


class CheckupTester {
public:
    CheckupTester();  // Default constructor
    
    CheckupType getData(CheckupType); //Prompt user for Checkup values.
    
    void showValues(CheckupType); //Calls the myCheckup explainRatio function.

    CheckupType get_p1();
    void        set_p1(CheckupType);

    CheckupType get_p2();
    void        set_p2(CheckupType);

    CheckupType get_p3();
    void        set_p3(CheckupType);
    
    CheckupType get_p4();
    void        set_p4(CheckupType);

private:
    CheckupType PatientOne;
    CheckupType PatientTwo;
    CheckupType PatientThree;
    CheckupType PatientFour;
    
};

#endif /* CheckupTester_hpp */
