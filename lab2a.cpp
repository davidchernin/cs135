/*
Author: David Chernin
Course: CSCI-135
Instructor: Brandon Foster
Assignment: Lab2A

This program will asks the user to input an integer 0 to 100. If the inputted number is out of range 0 to 100, the program will keep asking user to re-enter until a valid number is input. After this valid value is obtained, the program will print this number n squared.
*/

#include <iostream>
using namespace std;

int main() {
  int number;

  do {
    cout << "Please enter an integer (0 < n < 100): ";
    cin >> number;
  } while (number <= 0 || number >= 100);

  int square = number * number;
  cout << "Number squared is " << square << endl;

  return 0;
}
