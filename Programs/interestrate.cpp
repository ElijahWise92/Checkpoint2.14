/*
Code File Name: Chapter3Exercise19
Programmer: Elijah Wise
Due Date: 03/15/26
Requirements: Use provided forumla to write a program that asks for specific values and displays them.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
    double loanAmount;
    double annRate;
    double monRate;
    double monPayment;
    double amountPaid;
    double interestPaid;
    int numPayments;

    //Get user input
    cout << "Enter loan amount: ";
    cin >> loanAmount;

    cout << "Enter the annual interest percentage rate : ";
    cin >> annRate;

    cout << "Enter the number of payments: ";
    cin >> numPayments;

    //Convert annual rate to monthly decimal rate
    monRate = annRate / 100 / 12;

    //This should be the formula but written for C++
    monPayment = 
    (monRate * pow(1 + monRate, numPayments)) /
    (pow(1 + monRate, numPayments) - 1) *loanAmount;

    //calculate totals
    amountPaid = monPayment * numPayments;
    interestPaid = amountPaid - loanAmount;

    //display results but limit it to only 2 decimal points
    cout << fixed << setprecision(2);

    cout << "\nLoan Amount: $" << loanAmount << endl;
    cout << "Monthly Interest Rate: " << monRate * 100 << "%" << endl;
    cout << "Number of Payments: " << numPayments << endl;
    cout << "Monthly Payment: " << monPayment << endl;
    cout << "Amount Paid Back: $" << amountPaid << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

    return 0;
}