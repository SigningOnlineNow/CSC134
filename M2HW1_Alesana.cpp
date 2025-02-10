// CSC-134-0001
// Andrew Norris
// M2HW1_Banking_transactions
// Date: 02-10-2025 Monday
// 1008 HOURS EASTERN
// Alesana E. Alesana
// Banking-Transaction Simulator

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Question 1: Banking Transaction Simulations
  cout << fixed << setprecision(2);
  string bank_account_number = "129054370";
  // Ask the user for their name
  string what_is_your_name;
  cout << "What is your name? ";
  cin >> what_is_your_name;
  cin >> what_is_your_name;
  cout << endl;

  // Starting account balance
  float starting_account_balance;
  cout << "What is the starting account balance? ";
  cin >> starting_account_balance;
  cout << endl;

  // Amount of deposit
  float amount_of_deposit;
  cout << "How much is the deposit? ";
  cin >> amount_of_deposit;
  cout << endl;

  // Amount of withdrawal
  float amount_of_withdrawal;
  cout << "How much is the withdrawal? ";
  cin >> amount_of_withdrawal;
  cout << endl;

  // Print out all the users information
  // Name on the account
  // Account number ( you can generate this any way you want)
  cout << "Name on the account:          " << what_is_your_name << endl;
  cout << "Account Serial Number:        " << bank_account_number << endl;
  cout << "Current Account Balance:     $" << starting_account_balance << endl;
  cout << "Amount of Deposit:           $" << amount_of_deposit << endl;
  cout << "Amount of Withdrawal:        $" << amount_of_withdrawal << endl;

  float new_account_balance =
      starting_account_balance + amount_of_deposit - amount_of_withdrawal;
  cout << "New Balance Amount:          $" << new_account_balance;
  cout << endl;
  cout << "--------------------------------------------------------------------"
          "--";
  cout << endl;
  return 0;
}