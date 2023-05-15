#include <iostream>
#include <vector>


namespace bruh 
{
  // just here to remind me :D
  // you would use bruh::x to access variables and stuff from here in the main thing
}

// typedef should be used to shorten datatypes, it has the syntax: typedef [datatype] [newName_t];

int main()
{
  /* code for learning! */
  using std::string; // makes all the variable types normal
  using std::cout; // i'm lazy and hate typing std::cout

  // learning how to use cout, or console output
  cout << "hello mom" << "\n";
  cout << "i love you <3" << "\n";

  // learning variables
  
  // int
  int x = 5;

  // string
  string name = "boogie";
  
  // bool 
  bool likeCode = true;

  // time to add some text alongside it
  int age = 15;

  cout << "hello " << name << "it is " << likeCode << " that you like code" << '\n';
  cout << "you are " << age << " years old";


  // will come back to type conversions after doing user inputs n' stuff

  // user input
  // file is getting to large and hard to read, go to helloworld1.cpp for more :D


  // check if code runs good (0 = good, 1 = bad)
  return 0;
}
