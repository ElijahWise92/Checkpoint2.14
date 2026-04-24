/*
Code File Name: Chapter4Exercise23
Programmer Name: Elijah Wise
Due Date: 04/12/2026
Requirements: Write a program that displays a menu that will calculate the area of a circle,
triangle, or rectangle, or quit. Have the user input requested information. 
After validating user input, use provided formulas to calculate and display the results.
End the program if the quit option is chosen. Display an error message if the user enters a number outside the 1-4 range
and do not accept negative values for the circle's radius, the rectangle's length or width, or the triangles base or height.
*/
#include <iostream>
using namespace std;
int main ()
{
    //declare variables
    int num;
    double radius, length, width, base, height, area;

    //Display user imput prompts
    cout << "Geometry Calculator: Select a number (1-4) " << endl;
    cout << "1. Calculate the area of a circle." << endl;
    cout << "2. Calculate the area of a rectangle." << endl;
    cout << "3. Calculate the area of a triangle." << endl;
    cout << "4. Quit." << endl;
    cin >> num;

    //This is our menu that will displayed for this program. We use switch to achieve this
    switch(num)
    {
        case 1: //Circle
            cout << "Enter the radius: ";
            cin >> radius;

            //Input validation because values cannot be negative
            if (radius < 0){ 
                cout << "Error: Radius cannot be negative." << endl;
            }
            else {
                area = 3.14159 * radius * radius; //We do not need cmath/pow since we only need to square something once in this program
                cout << "The area of the circle is " << area << endl;
            }
        break;

        case 2: //Rectangle
            cout << "Enter the length of the rectangle." << endl;
            cin >> length;
            cout << "Enter the width of the rectangle." << endl;
            cin >> width;

            if (length < 0 || width < 0){
                cout << "Error: Value cannot be negative." << endl;
            }
            else{
                area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
            }
        break;

        case 3: //Triangle
            cout << "Enter the base of the triangle: " << endl;
            cin >> base;
            cout << "Enter the height of the triangle: " << endl;
            cin >> height;

            if (base < 0 || height < 0){
                cout << "Error: Value cannot be negative." << endl;
            }
            else{
                area = base * height * 0.5;
                cout << "The area of the triangle is: " << area << endl;
            }
        break;

        case 4: //Quitting option
            cout << "Program is ending." << endl;
        break;
        
        default: //In case they select an invalid option below or beyond 1-4
            cout << "Error: Please select a valid number (1-4)." << endl;
    }

    return 0;
}

