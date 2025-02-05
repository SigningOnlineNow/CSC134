// CSC-134-0001
// Andrew Norris
// M2LAB1_Crate_Volume_Price_Calculation
// Date: 02-03-2025 Monday
// 1937 HOURS EASTERN
// Alesana E. Alesana
// General Crates, Inc. Cubic-feet-charge_calculator

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Ask the user to enter the dimensions of the crate
  float length_crate;
  cout << "What is the desired length of crate?            ";
  cin >> length_crate;
  cout << endl;

  float width_crate;
  cout << "What do you want the width to be?               ";
  cin >> width_crate;
  cout << endl;

  float height_crate;
  cout << "How tall do you want this bad boy to be!?       ";
  cin >> height_crate;
  cout << endl;
  cout << "------------------------------------------------------------------";
  cout << endl;

  cout << endl;
  cout << "You entered: " << endl;
  cout << endl;
  cout << fixed << setprecision(2);
  cout << "Desired length of crate:               " << setw(12) << length_crate
       << " ft" << endl;
  cout << endl;
  cout << "Desired width of crate:                " << setw(12) << width_crate
       << " ft" << endl;
  cout << endl;
  cout << "Desired height of crate:               " << setw(12) << height_crate
       << " ft" << endl;
  cout << endl;
  cout << "------------------------------------------------------------------";
  cout << endl;

  // Calculate the crates volume
  cout << fixed << setprecision(2);
  float volume_of_crate = length_crate * width_crate * height_crate;
  cout << endl;
  cout << "Your crate's volume is:                  " << setw(10)
       << volume_of_crate << endl;
  cout << endl;

  // Calculate the cost of building the crate
  float cost_per_cubic_feet = 2.50;
  float total_cost = cost_per_cubic_feet * volume_of_crate;
  cout << "Cost per cubic volume is:             $  " << setw(10) << total_cost
       << endl;

  // cost breakdown
  float labor_cost = 1500.00;
  float overhead_cost = .50;
  float exterior_paintjob_per_crate = 200;
  float interior_paintjob_per_crate = 300;
  cout << endl;
  cout << "Labor charge:                         $  " << setw(10) << labor_cost
       << endl;
  cout << endl;
  cout << "Overhead charge:                         " << setw(10)
       << overhead_cost * 100 << "%" << endl;
  cout << endl;
  // Calculate overhead percentage and labor cost
  // of the crate's construction and labor
  cout << endl;
  cout << fixed << setprecision(2);
  float overhead_percentage_profit_increase = total_cost * overhead_cost;
  cout << "------------------------------------------------------------------";
  cout << endl;
  cout << "Calculated Overhead charge:           $  " << setw(10)
       << overhead_percentage_profit_increase << endl;
  cout << endl;

  cout << "Calculated Labor costs:               $  -" << setw(9) << labor_cost
       << endl;
  cout << "Crate Exterior paint scheme:          $  -" << setw(9)
       << exterior_paintjob_per_crate << endl;
  cout << "Crate Interior paint scheme:          $  -" << setw(9)
       << interior_paintjob_per_crate << endl;
  cout << endl;
  cout << endl;
  cout << "------------------------------------------------------------------";
  cout << endl;
  cout << fixed << setprecision(2);
  float crate_costs_charges = total_cost + overhead_percentage_profit_increase -
                              labor_cost - exterior_paintjob_per_crate -
                              interior_paintjob_per_crate;
  cout << "Calculate Net Charge-Profit:          $   " << setw(10)
       << crate_costs_charges << endl;
  cout << endl;
  cout << "Amount of profit made:                $   " << setw(10)
       << crate_costs_charges << endl;

  return 0;

// I tested all numerical values from n = 9.3 and above; which produces values greater than 0.
// But when I entered values from n = 9.2 and below; result returned values less than 0.
// So I've decided to utilize conditional statements to express compensation for values less than zero. 






}