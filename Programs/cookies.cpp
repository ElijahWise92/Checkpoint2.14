/*
Code File Name: Chapter3Exercise6
Programmer: Elijah Wise
Due Date: 03/15/26
Requirements: Write a program that asks the user how many cookies he or she wants to make,
then displays the number of cups of each ingredient needed for the specified number of cookies.
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //Define constants, they are all const because the recipe value does not change
    const int recipe = 48; 
    const double sugar = 1.5; 
    const double butter = 1;
    const double flour = 2.75;

    int cookiesWanted;
    double sugarNeeded, butterNeeded, flourNeeded; //We can declare all variables on same line because they are the same

    cout << "How many cookies do you want to make? " ; //User-prompt
    cin >> cookiesWanted;

    //Calculate the ingredient amounts needed based off the recipe
    sugarNeeded = (sugar / recipe) * cookiesWanted;
    butterNeeded = (butter / recipe) * cookiesWanted;
    flourNeeded = (flour / recipe) * cookiesWanted;

    //We want cleaner looking results so we will only display 2 digits after decimal point, if needed
    cout << fixed << setprecision(2);

    //Display Results
    cout << "You will need " << endl;
    cout << sugarNeeded << " cups of sugar." << endl;
    cout << butterNeeded << " cups of butter." << endl;
    cout << flourNeeded << " cups of flour." << endl;

    return 0;
}
