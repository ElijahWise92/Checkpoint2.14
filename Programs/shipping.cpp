/*
Code File Name: Chapter4Exercise15
Programmer: Elijah Wise
Due Date: 04/12/2026
Requirements: Write a program that asks for the weight of the package and distance it is to be shipped, then display the charges. 
Certain restrictions apply.
*/
#include <iostream>
#include <iomanip> //Dealing with money ranges in this program so we will need to use setprecision()
using namespace std;
int main ()
{
double weight, cost, rate;
int distance, shippingDistance; //this is important to use the int data type because int does not use decimals and will drop anything off post .

//User prompts
cout << "How much does the package weigh (kg)?" << endl; 
cin >> weight;

//We validate the parameters of the program for this specific project
if(weight <= 0 || weight > 20){
    cout << "This package cannot be shipped. Weight must be between 0 and 20 kg." << endl;
    return 0; //This will end the program 
}

//More user prompts
cout << "What is the shipping distance (miles)?" << endl;
cin >> distance;

if (distance < 10 || distance > 3000){
    cout << "This package cannot be shipped. Distance must be between 10 and 3000 miles." << endl;
    return 0;
}
//These are the rates
if (weight <= 2)
    rate = 1.10;
else if (weight <= 6)
    rate = 2.20;
else if (weight <= 10)
    rate = 3.70;
else rate = 4.80;   //trailing else 

//The line will charge the rate at a minimum of 500 miles. This formula helps determine how many instances of 500 miles it will charge
shippingDistance = (distance + 499) / 500;
//Once that value has been determined this is the total cost formula that will display
cost = rate * shippingDistance;

cout << fixed << setprecision(2); //Since we're displaying a price I want it to read $x.x0 instead of x.x
    cout << "Your total shipping cost is $" << cost << "." << endl;

return 0;
}

