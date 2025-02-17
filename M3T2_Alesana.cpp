// Andrew Norris
// CSC-134
// Alesana Alesana

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  // Variables
  double len1, wid1, len2, wid2;
  double area1, area2;

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
  area2 = len2 * wid2;

  // Print the area
  cout << "First area is: " << area1 << endl;
  cout << "Second area is: " << area2 << endl;

  // Which is larger?
  if (area1 > area2) {
    cout << "The first one is larger." << endl;
  } else if (area2 > area1) {
    cout << "The second one is larger." << endl;
  } else {
    cout << "They're both the same size." << endl;
  }
  return 0;
}