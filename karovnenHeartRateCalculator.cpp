#include <iostream>
using namespace std;
//repl.it repo:https://repl.it/join/lesqcvnf-emilybuck
//The Problem:Working out karvonen heart rate at different intensities
//General approach: Use a for loop to calculate bpm at different intensities
//Main issues: Intensity needs to be in a float

int main() {
  int age, restingPulse, bpm;
  //Instantiating variables

  cout << "Please enter your age: ";
  cin >> age;
  cout << "Please enter your resting pulse: ";
  cin >> restingPulse;
  //Input variables

  cout << "\nResting Pulse: "<< restingPulse << "\tAge: "<< age << "\n";
  //output these for the user
  cout << "\nIntensity\t\tRate\n";
  cout << "-----------------------\n";
  //formatting
  for(float intensity = 0.4; intensity < 1; intensity += 0.05){
    bpm = (((220 - age) - restingPulse) * intensity) + restingPulse;
    //Working out karovenHeartRate
    cout << intensity * 100 << "%.\t\t\t"<< bpm << " bpm\n";;
    //Karvoven output
  }
}
