// CSC-134-0001
// Instructor: Andrew N.
// Alesana E.A
// M4HW1.cpp
// 24 March 2025

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int number;

    // Input validation: Loop until a valid number (1-500) is entered
    while (true) {
        cout << "Enter a number from 1 to 5000: ";
        if (cin >> number) {
            if (number >= 1 && number <= 5000) {
                break;  // Valid number entered, exit loop
            } else {
                cout << "Invalid number. Please try again." << endl;
            }
        } else {
            // Handle non-numeric input
            cout << "Invalid input. Please enter a numeric value." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard the invalid input
        }
    }

    // Print the multiplication table for the entered number using a while loop
    int multiplier = 1.00;
    while (multiplier <= 200.00) {
        cout << number << " x " << multiplier << " = " 
             << (number * multiplier) << "." << endl;
        multiplier++;
    }

    return 0;
}
