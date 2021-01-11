#include <iostream>
using namespace std;

//repl.it repo:https://repl.it/join/vhiihfcf-emilybuck
//The Problem: Working out square foot and converting that into square meters
//General approach: Work out square foot initially then convert using a conversion factor
//Main issues: Making C++ round up

int main() {
  float length,
        width,
        squareFoot,
        squareMeters;

  const float footToMeters = 10.764;
  //Instanciating variables, including const footToMeters conversion factor

  cout << "What is the length of the room in feet? ";
  cin >> length;
  cout <<"What is the width of the room in feet? ";
  cin >> width;
  //Asking for inputs on length and width

  squareFoot = width * length;
  squareMeters = squareFoot / footToMeters;
  //Working out squareFoot and squareMeters

  cout << "Your room’s dimension is " << length << " by " << width << " feet, the area is: \n" << squareFoot << " square foot \n" << squareMeters << " square meters \n";
  //Output of conversion

  return 0;
}
