// Assignment 1 - Fuel Range
// TODO: YOUR NAME HERE
#include <iostream>
// TODO: Add the "using" statement
using namespace std;
int main() {
  // TODO: Declare your variables, with comments for each
  double tankCapacity;
  double mpg;
  double tankFilled; 

  // TODO: Prompt for and input the required values
  cout << "Please input the capacity of your fueld tank: ";
  cin >> tankCapacity;

  cout << "Please input the mpg of your fuel tank: ";
  cin >> mpg;

  cout << "Please input the percent full: ";
  cin >> tankFilled;

  // TODO: Calculate the results
  double remainingFuel = (tankFilled*tankCapacity)/100;
  double milesLeft = remainingFuel*mpg;

  // TODO: Output the results
  
  cout << "The vehicle can be driven " << milesLeft << " miles on the remaining fuel.";


}
