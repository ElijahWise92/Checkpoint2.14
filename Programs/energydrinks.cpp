/*
Code File Name: Chapter2Exercise18
Programmer: Elijah Wise
Due Date: 03/05/26
Requirements: A soft drink company recently surveyed 16,500 of its customers and found that 
approximately 15 percent of those surveyed purchase one or more energy drinks per week. 
Of the customers who purchase energy drinks, approximately 58 percent of them prefer 
citurs flavored energy drinks. Write a program that displays the following:
- The approximate number of customers in the survey who purchase one or more energy drinks per week.
- The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
 */
#include <iostream>
using namespace std;
int main ()
{
    int customers = 16500; //we declare the integer variable named customers and assign it to the whole number 16500.
    double pplwhodrink; //we use the double variable here because the resultspost calculation may contain a decimal
    double citrus;
    pplwhodrink = customers * 0.15; //we cannot write 15% in this program so we turn it into a decimal 0.15
    citrus = pplwhodrink * 0.58; //we are now calculating how many of the customers prefer citrus flavors and store it in citrus 
    cout << pplwhodrink << " customers purchase 1 or more energy drinks per week." << endl; //this will display this text
    cout << citrus << " customers prefer citrus-flavored energy drinks." << endl;
    return 0; 
}