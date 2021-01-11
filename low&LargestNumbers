#include <iostream>
#include<regex>
using namespace std;
//repl.it repo:https://repl.it/join/sunkbuzt-emilybuck
//The Problem: taking a entered value and checking if its the lowest or highest value thats been entered
//General approach: Checking if the value is Q if not check if its valid, and if its the lowest or highest number
//Main issues: Checking if the input is a number 

string input;
int lowestValue, largestValue, valuesEntered;
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
    cout << "Lowest Value:\t" << lowestValue << "\n";
    cout << "Largest Value:\t" << largestValue << "\n";
    return;
    //Output the result once the user presses q or Q
  }
  if(isNum(input)){
    valuesEntered++;
    //Adding to the total number of values entered
    int inputInt = stoi(input);
    // cout << inputInt;
    //converting it to a int
    if(inputInt < lowestValue){
      lowestValue = inputInt;
      //Changing the lowestValue if the input is smaller
      userInput();
      ///Restarting the function
    } else if(inputInt > largestValue){
      largestValue = inputInt;
      //Changing the largestValue if the input is larger
      userInput();
      //Restarting the function
    } 
     userInput();
  } else {
    cout << "Invalid value, please try again: \n";
    userInput();
    //Ouputting an error message if the input isnt a number or a Q
  }

}
int main() {
  cout << "Please enter a valid numeric, or “Q” to finish:\n";
  userInput();
  //taking the users input
  return 0;
}
