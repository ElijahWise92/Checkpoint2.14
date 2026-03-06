/* 
Code File Name: Chapter2Exercise7
Programmer :Elijah Wise
Due Date: 03/05/26
Requirements: Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program that displays:
The number of millimeters higher than the current level that the ocean's level will be in 5 years.
The number of millimeters higher than the current level that the ocean's level will be in 7 years.
The number of millimeters higher than the current level that the ocean's level will be in 10 years. 
*/
#include <iostream>
using namespace std;
int main () 
{
    /*
    - we are using const as the modifier because we've established the ocean is rising
    1.5mm per year
    - double is the data type because 1.5 isn't a whole number
    - riserate is the identifier of the double variable
    - 1.5 is the value of riserate
    - rise5,7,10 are being declared here but are not being assigned a value at the moment
    */
    const double  riserate = 1.5; 
    double rise5;
    double rise7;
    double rise10;

    /*
    We are now assigning values of rise5,7, and 10 by multiplying them by their 
    respecitve numbers
    */
    rise5 = riserate * 5;
    rise7 = riserate * 7;
    rise10 = riserate * 10;
    // This is just outputting the results with the prompt given
    cout << "The ocean's level will rise " << rise5 << "mm in 5 years." << endl;
    cout << "The ocean's level will rise " << rise7 << "mm in 7 years." << endl;
    cout << "The ocean's level will rise " << rise10 << "mm in 10 years." << endl;
    return 0;
}


