// CSC-134-0001
// Instructor: Andrew N. 
// Alesana E.A
// 3/17/2025
// 1924HRS
// M4T1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // Using a simple while loop
  // Remember we start counting from zero

  int number = 10;

  int i = 0;
  while (i < number) {
    cout << "Hello" << endl;
    // i = i + 1;
    i++; // shorter version of the above
  }
  cout << "That's all!" << endl;

  // program 5-5
  const int MIN_NUMBER = 1;
  const int MAX_NUMBER = 10;

  int num = MIN_NUMBER;
  // print a table header
  // "\t" is useful for formatting (the tab key)
  cout << "Number\tNumber Square" << endl;

  while (num <= MAX_NUMBER) {
    // notic her we start at 1,
    // and stop at 10 because of <=
    // (< would stop at 9)
    cout << num << " " << num * num << endl;
    // as we see, if we don't increase num,
    // it will run forever...
    num++;
      
  }
}