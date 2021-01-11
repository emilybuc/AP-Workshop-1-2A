#include <iostream>
//repl.it repo: https://repl.it/join/eclztrad-emilybuck
//The Problem: We want to take two inputs and concatinate them
//General approach: take two inputs and use getline to take a whole line and output the variables in the requested format
//Main issues: When there is a space in the input it takes this as another input, use getline to fix this
int main() {
  std::string quote;
  std::string author;
  //Instantiate variables

  std::cout << "What is the quote? ";
  std::getline (std::cin,quote);
  //Recieving quote input
  
  std::cout << "Who said it? ";
  std::getline (std::cin,author);
  //Recieving author input

  std::cout << "\n"<<author << " says: \"" << quote << "\"\n";
  //Formatted output
  return 0;
  //return no error
}
