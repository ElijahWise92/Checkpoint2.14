/* Code File Name: Chapter5Exercise11
Programmer Name: Elijah Wise
Due Date: 04/26/2026
Requirements: Write a program that will predict the size of a population of organisms.The program should ask the user for the starting
number of organisms, their daily population percentage increase, and the number of days they will multiply. A loop should display the 
size of the population for each day. Do not accept a number less than 2 for the starting size of the population, 
a negative number for the average daily population, or a number less than 1 for the number of dyas they will multiply. */
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    //Declare variables
    int days;
    double startingSize, dailyPop;

    //User prompts
    cout << "What is the number of starting organisms?" << endl;
    cin >> startingSize;

    while (startingSize < 2){   //This is our first validation loop. If condition not met, start over until it is
        cout << "Error. Number must be at least 2." << endl;
        cin >> startingSize;
    }

    //We should only be at this point in the program if and only if the previous condition was met
    cout << "What is. the average daily population increase percentage?" << endl;
    cin >> dailyPop;

    while(dailyPop < 0){
        cout << "Error. Percentage value cannot be negative" << endl;
        cin >> dailyPop;
    }

    cout << "How many days will they multiply?" << endl;
    cin >> days;

    while(days < 1){
        cout << "Error. Number of days must be at least 1." << endl;
        cin >>days;
    }

    dailyPop = dailyPop / 100; //The user puts the percentage number in but we still have to use this formula to have the actual percentage number

    cout << fixed << showpoint << setprecision(2);

    for (int day = 1; day <= days; day++){  //This loop runs for each day. It shouls the current population and then updates the next day and so on
        cout << day << "\t" << startingSize << endl;

    startingSize = startingSize + (startingSize * dailyPop);    //This formula calculates the new population by adding the daily growth percentage to the current population
    }
    return 0;
}