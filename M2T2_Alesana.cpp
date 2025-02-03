// CSC 134-0001
// M2T2- AppleOrchard/price of apples
// Instructor: Andrew Norris
// 02/03/2025
// Building a receipt calculator
// Alesana E. Alesana
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // declare variables
  float tuna_sandwich = 12.99;
  cout << "Sub-Total: " << setw(9) << tuna_sandwich << endl;
  float state_tax = 0.04;
  float calculated_tax = tuna_sandwich * state_tax;
  cout << setprecision(2) << fixed << endl;
  cout << "Calculated tax: " << calculated_tax << endl;
  float new_price = tuna_sandwich + calculated_tax;
  cout << "Total: " << setw(13) << new_price << endl;
  cout << endl;

  // Print the Receipt
  cout << "Here is your receipt, thank you for shopping with us! " << endl;

  return 0;
}
