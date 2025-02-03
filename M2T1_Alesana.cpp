// CSC 134-0001
// M2T1- AppleOrchard/price of apples
// Instructor: Andrew Norris
// 02/03/2025
// utilizing the cin object to get user input
// Alesana E. Alesana

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  string apples_total;
  cout << "Please enter the number of apples you want to buy: ";
  cin >> apples_total;
  float price_per_apple;
  cout << "Please enter the price per apple: : ";
  cin >> price_per_apple;
  float total_price_of_apples = stof(apples_total) * price_per_apple;
  cout << "The total price of apples is: " << total_price_of_apples << endl;

  return 0;
}
