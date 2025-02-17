

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Variables
  double len1, wid1, len2, wid2;
  double area1, area2;

  // Ask user for the length and width
  cout << "What is the length of the first rectangle? " << endl;
  cin >> len1;
  cout << "What is the length of the first rectangle? " << endl;
  cin >> wid1;
  cout << "What is the length of the second rectangle? " << endl;
  cin >> len2;
  cout << "What is the length of the second rectangle? " << endl;
  cin >> wid2;

  // Find the area
  area1 = len1 * wid1;
  cout << endl;
  area2 = len2 * wid2;

  // Print the area
  cout << "The area of the first rectangle is: " << area1 << endl;
  cout << "The area of the second rectangle is: " << area2 << endl;

  return 0;
}
