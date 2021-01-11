#include <iostream>
#include<regex>
using namespace std;
//repl.it repo:https://repl.it/join/aqegyqja-emilybuck
//The Problem:Trying to figure out positive numbers from negative ones and zeros and outputting it at the end
//General approach: do if statements to check for each input and add to the total
//Main issues: Checking if the value is a number 
//Update Readme
int negatives = 0,
    positives = 0,
    zeros = 0, 
    valuesEntered;
string input;
//Instantiating variables
bool isNum(string input){
    regex numbers ("[-+]?([0-9]*[0-9]+|[0-9]+)");
    //regex numbers it checks all characters to see if they are between 0-9 (so are numbers)
    if (regex_match (input,numbers)){
      return true;
      //return true if its a number
    }
    return false;
    //if not then false
}
void userInput(){
  cin >> input;
  //Taking input from the user
  if(input == "Q"|| input == "q"){
    cout << "\nTotal number of values entered: " << valuesEntered << "\n";
    cout << "Zeros:\t\t" << zeros << "\n";
    cout << "Positives:\t" << positives<< "\n";
    cout << "Negatives:\t" << negatives<< "\n";
    return;
    //Output the result once the user presses q or Q
  }
  if(isNum(input)){
    valuesEntered++;
    //Adding to the total number of values entered
    int inputInt = stoi(input);
    //converting it to a int
    if(stoi(input) == 0){
      zeros++;
      //Adding to the number of zeros
      userInput();
      ///Restarting the function
    } else if(inputInt < 0){
      negatives++;
      userInput();
    } else if(inputInt > 0){
      positives++;
      userInput();
    }

  } else {
    cout << "Invalid value, please try again: \n";
    userInput();
    //Ouputting an error message if the input isnt a number or a Q
  }

}
int main() {
    cout << "Please enter a valid numeric, or “Q” to finish:\n";
    //inital message then call for user input
    userInput();
  //Start by asking the user for an input
  return 0;
}
