/**
 * 
 * Edward Cruz, 02/10/2020
 * Lab_04 - CheckupTester.cpp
 * 
**/

/*
Blood pressure values are usually displayed with a slash between the 
systolic and diastolic numbers. (Typical blood pressure 
values are 110/78 or 130/90.) With the cholesterol figures, 
display the explanation of the cholesterol ratio calculation. 
(Typical cholesterol values are 100 and 40 or 180 and 70.)
*/

#include <iostream>
#include "CheckupType.h"

Checkup getData();
void showValues(Checkup patient);

/*
Create a tester program named TestCheckup whose main() method 
declares four Checkup objects. Call a getData() method four times.
*/

int main() {
    Checkup patient1, patient2, patient3, patient4;
    
    patient1 = getData();
    patient2 = getData();
    patient3 = getData();
    patient4 = getData();

    std::cout << "\n\n\n\n";

    showValues(patient1);
    showValues(patient2);
    showValues(patient3);
    showValues(patient4);

    return 0;
}

/*
Within the method, prompt a user for values for each field for a Checkup, 
and return a Checkup object to the main() method where it is 
assigned to one of main()’s Checkup objects. 
*/
Checkup getData() {
    std::string pn;
    double sv, dv, lv, hv;
    std::cout << "\n\nPlease enter the patient's number: ";
    std::cin  >> pn;
    std::cout << "Please enter the systolic value: ";
    std::cin  >> sv;
    std::cout << "Please enter the diastolic value: ";
    std::cin  >> dv;
    std::cout << "Please enter the LDL value: ";
    std::cin  >> lv;
    std::cout << "Please enter the HDL value: ";
    std::cin  >> hv;
    std::cout << std::endl;

    Checkup p(pn,sv,dv,lv, hv);
    return p;
}

/*
Then, in main(), pass each Checkup object in turn to a showValues()method 
that displays the data. Blood pressure values are usually displayed 
with a slash between the systolic and diastolic numbers.
*/
void showValues(Checkup patient) {
    std::cout << "\n\nPatient number: " << patient.get_patientNumber() << std::endl;
    std::cout << "Systolic over Diastolic value: " << patient.get_systolicVal() << "/"
              << patient.get_diastolicVal() << std::endl;
    std::cout << "Cholesterol level values: " << patient.get_ldlVal() << "/"
              << patient.get_hdlVal() << " - ";
    patient.computeRatio();
    std::cout << std::endl;
    patient.explainRatio();
}