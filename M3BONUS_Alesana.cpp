// CSC - 134 - 0001
// Instructor: Andrew N. 
// M3BONUS
// Alesana E.A
// 03/13/2025

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
int rollDice();
void playCraps();

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    int choice;
    bool keepGoing = true;
    
    while (keepGoing) {
        cout << "\n=== Simple Craps Game Menu ===" << endl;
        cout << "1. Play Craps" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 1) {
            playCraps();
        }
        else if (choice == 0) {
            cout << "Exiting game. Goodbye!" << endl;
            keepGoing = false;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}

// rollDice simulates rolling two dice and returns their sum.
int rollDice() {
    int die1 = rand() % 6 + 1; // generates a number 1-6
    int die2 = rand() % 6 + 1; // generates a number 1-6
    int sum = die1 + die2;
    cout << "Rolled: " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

// playCraps simulates a single game of craps.
void playCraps() {
    cout << "\nStarting a new game of Craps..." << endl;
    int sum = rollDice();
    
    // First roll outcomes:
    if (sum == 7 || sum == 11) {
        cout << "You rolled " << sum << ". You win on the first roll!" << endl;
        return;
    }
    else if (sum == 2 || sum == 3 || sum == 12) {
        cout << "You rolled " << sum << ". Craps! You lose on the first roll!" << endl;
        return;
    }
    else {
        int point = sum;
        cout << "Your point is set to " << point << ". Keep rolling until you hit your point to win, or a 7 to lose." << endl;
        
        // Continue rolling until point or 7 is rolled
        while (true) {
            sum = rollDice();
            if (sum == point) {
                cout << "You rolled your point! You win!" << endl;
                break;
            }
            else if (sum == 7) {
                cout << "You rolled a 7 before your point. You lose!" << endl;
                break;
            }
            else {
                cout << "Rolling again..." << endl;
            }
        }
    }
}
