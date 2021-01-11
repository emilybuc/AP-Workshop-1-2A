#include <iostream>
#include <string>
using namespace std;
//repl.it repo:https://repl.it/join/rlegrzdx-emilybuck
//The Problem:We want to take a temperature and convert it to either Centigrade or Fahrenheit depending on input
//General approach:Take two inputs, a int temperature and whether its in C or F then convert it into the other
//Main issues:Ensuring that the variables were instantiated to take floats and chars, ensuring no duplication
int main() {
  float temperature, convertedTemperature;
  char conversionChar;
  //instantiate variables

  cout << "Please enter the starting temperature ";
  cin >> temperature;
  //Ask for temperature float

  std::cout << "Press ‘C’ to convert from Fahrenheit to Centigrade. \nPress ‘F’ to convert from Centigrade to Fahrenheit.\n\nYour Choice: ";
  cin >> conversionChar;
  //Take the character of what we want to convert the number to

  conversionChar = toupper(conversionChar);
  //Change the character to uppercase 

  if(conversionChar == 'C'){
    convertedTemperature = (temperature - 32) * 5 / 9;
    //converting to Fahrenheit
    cout << temperature << " degrees Fahrenheit is "<< convertedTemperature;
    //Output for conversion to Centigrade
  } else if(conversionChar == 'F') { 
    convertedTemperature = (temperature * 9/5) + 32;
    //converting to Centigrade
    cout << temperature << " degrees Centigrade is "<< convertedTemperature;
    //Output for conversion to Fahrenheit
  }
  return 0;
}
