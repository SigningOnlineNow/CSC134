// CSC-134
// M3T3
// Norris.Andrew
// 2/17/2025
// Start with dice rools
// What dice are you using today?
// Alesana Alesana

#include <cmath>
#include <iomanip>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  const int SIDES = 6; // yours will differ!
  int seed = time(0);
  // rand() is a large, so we take the remainder which is %
  srand(seed);
  int roll;
  roll = (rand() % SIDES);
  cout << roll << endl;

  roll = (rand() % SIDES);
  cout << roll << endl;

  roll = (rand() % SIDES);
  cout << roll << endl;
  
}