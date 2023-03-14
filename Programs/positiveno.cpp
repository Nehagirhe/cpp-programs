// Program to print positive number entered by the user

#include <iostream>
using namespace std;
int main() {
  int number;
  cout << "Enter an integer: ";
  cin >> number;
  if (number > 0) 
  {
   cout << "You entered a positive integer: " << number << endl;
  }


  return 0;
}
