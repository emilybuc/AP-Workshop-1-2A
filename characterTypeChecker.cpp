#include <iostream>
#include<regex>
using namespace std;
//repl.it repo:https://repl.it/join/wdmubctd-emilybuck
//The Problem: Trying to figure out if an entered value is a alpha or digit character
//General approach: check for alpha or numeric character if not then special char
//Main issues: Getting Y/N menu
void userInput();
char input, inputTryAgain;
void tryAgain(){
  cout << "\nTry again (Y/N)? ";
  cin >> inputTryAgain;
  //asking for Y/N input
  if(inputTryAgain == 'Y'){
    cout << "\n";
    userInput();
    //If yes then start again
  } else if (inputTryAgain == 'N'){
    cout << "Thank you, good bye\n";
    //exit
    return;
  } else {
    cout << "invalid input, try again ";
    tryAgain();
    //fall back if they enter something else
  }
}
void userInput(){
  cout << "Please enter a character? ";
  //inital message then call for user input
  cin >> input;
  if(isalpha(input)){
    cout << "Alphabetic character detected.\n";
    tryAgain();
  } else if (isdigit(input)){
    cout << "Numeric character detected.\n";
    tryAgain();
  } else {
    cout << "Special character detected. \n";
    tryAgain();
  }
  return;
}
int main() {
  userInput();
  //Call for function that takes input
  return 0;
}
