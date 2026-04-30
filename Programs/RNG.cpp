/* 
Code File Name: Chapter5Exercise20
Programmer Name: Elijah Wise
Due Date: 04/26/2026
Requirements: Write a program that generates a random number and asks the user to guess what the number is. 
If the number is too high or low, notify the user to try again. The program should use a loop that repeats
until the user guesses the correct number.
*/
#include <iostream>
#include <ctime> //Needed for srand
#include <cstdlib>
using namespace std;

int main ()
{
    int randomNum, guess;

    srand(time(0)); //This will allow us to use RNG

    /* This formula will determine the random number. 
    Using the modulus operator to limit the range 0-99
    then we add one so the range will be between 1-100. */
    randomNum = (rand() % 100) + 1; 
    cout << "Guess the number (1-100): \n"; //User prompt
    cin >> guess;

    //Validation loop. No negative numbers or numbers above 100.
    while (guess < 1 || guess > 100){
        cout << "Error. Number must be between 1 and 100. Try again: \n";
        cin >> guess;
    }

    //This is the loop
    while (guess != randomNum){
        if (guess > randomNum){
            cout << "Number is too high. Try again: \n"; 
        }
        else{
            cout << "Number is too low. Try again: \n";
        }
        cin >> guess;
    }
    //No need to write another expression. Value will either be too high, low, or the correct one.
    cout << "Correct! The number was " << randomNum << endl; 
    
    return 0;
}