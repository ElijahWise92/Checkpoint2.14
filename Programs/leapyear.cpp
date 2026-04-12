/* 
Code File Name: Chapter4Exercise 10
Programmer: Elijah Wise
Due Date: 04/08/2026
Requirements: Have user input a month and year. Determine if year is a leap year. Display if leap year or not and how many days are in month.
*/
#include <iostream>
using namespace std;
int main ()
{
    //Declare variables
    int month, year, days; //al variables are int and can be declared on the same line
    bool leapYear; //since the leap year will be a conditional expression we need the bool data type
    
    //User prompts
    cout << "Enter a month (1-12): " << endl;
    cin >> month;

    if (month < 1 || month > 12){ //We use this in case someone doesn't follow the prompt
        cout << "This month doesn't exist." << endl;
        return 0;} // This will end the program if month doesn't exist
    else{
        cout << "Enter a year: " << endl;
        cin >> year;}
    
    //Conditional formulas
    if (year % 100 == 0){
        leapYear = (year % 400 == 0);}
    else {
        leapYear = (year % 4 == 0);}

    if (leapYear){
        cout << "This year is a leap year." << endl;}
    else{
        cout << "This year is not a leap year." << endl;}

    if (month == 2){ //February is the only month that will have 28 or 29 days depending if leap year condition is met
        if (leapYear) 
            days = 29;
        else
            days = 28;}

    else if (month == 4 || month == 6 || month == 9 || month == 11){ //These months have 30 days
        days = 30;}
    else {
        days = 31;}
        
    cout << "This month has " << days << " days." << endl;
    
    return 0;
}