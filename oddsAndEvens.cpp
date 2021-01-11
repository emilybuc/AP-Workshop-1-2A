#include <iostream>
using namespace std;
//repl.it repo:https://repl.it/join/hogvpvzq-emilybuck
//The Problem: using the modulus operator to compute the remainder when divided by 2
//General approach: If the number is divided by 2 and leaves no remainder its even if not then odd
//Main issues: If the number is a float

int main() {
  int number;
  cout << "Please enter a value? ";
  cin >> number;
  //Taking entry
  if ( number % 2 == 0 ){
    cout << number << " is an even number \n";
    //If the number is divided by 2 and leaves no remainder it is odd
  } else {
    cout << number << " is an odd number \n";
    //else the number is odd
  }
  return 0;
}
