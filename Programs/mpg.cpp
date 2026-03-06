/* 
Code File Name: Chapter2Exercise10
Programmer: Elijah Wise
Due Date: 03/05/26
Requirements: A car holds 15 gallons and can travel 375 miles before refueling. 
Write a program that calculates the number of miles per gallon the car gets.
Display the result on the screen.
*/
#include <iostream>
using namespace std;
int main ()
{
    int miles = 375;
    int gallons = 15;
    double mpg;
    mpg = miles / gallons; 
    
cout << "This car gets " << mpg << " miles per gallon of gas." << endl;
return 0;
}