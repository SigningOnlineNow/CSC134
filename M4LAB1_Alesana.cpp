#include <iostream>
using namespace std;

int main() {
    int height, width;

    // Prompt the user for the dimensions of the asterisks
    cout << "What is the height: ";
    cin >> height;
    cout << "What is the width: ";
    cin >> width;

    // Use nested loops to print the block of asterisks
    for (int i = 0; i < height; i++) {       // Loop the column
        for (int j = 0; j < width; j++) {    // Loop the row
            cout << "* ";
        }
        cout << endl;  // Move to the next line after printing a row
    }

    return 0;
}
