// M3LAB2_Alesana.cpp
// Instructor: Andrew Norris
// Date: 2/26/2025
// CSC-134-0001

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  // Define variables
  double num_grade;                         // 0-100
  string letter_grade;                   // "A", "B", "C", "D", "F" etc. 
  
  

  // ask for the number grade
  cout << "Number grade to letter grade conversion prgram. " << endl;
  cout << endl;
  cout << " Enter the number grade: ";
  cin >> num_grade;
  // find the letter grade
  // remember && is AND
  // and || is OR
  if (num_grade >= 100) {
    letter_grade = "A+";
  }
  if (num_grade >= 90 && num_grade < 100) {
  letter_grade = "A";
  }
  if (num_grade >= 80 && num_grade < 90){
  letter_grade = "B";
  }
  if (num_grade >= 70 && num_grade < 80){
    letter_grade = "C";
  }
  if (num_grade >= 60 && num_grade < 70) {
    letter_grade = "D";
  }
  if (num_grade >= 1 && num_grade < 60){
    letter_grade = "F";
  }
  // Inform the user to enter a number between 0 and 100
  ///*
  if (num_grade < 1|| num_grade > 100){
    cout << "You entered: " << num_grade << endl;
    letter_grade = "Invalide number: Please enter a number between 0 and 100";
  }
  //*/
    
  // tell user the answer
  cout << "The grade " << num_grade << " is a " << letter_grade << endl;
  
  }