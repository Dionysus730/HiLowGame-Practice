#include "HiLowTools.hpp"
#include <iostream>
#include <string>
#include <conio.h>   // getch() for reading a single character

// namespace used
using namespace std;


//////////////////////////////////////////////////////////////////////////////////
// Entry point to HILOW game program
//////////////////////////////////////////////////////////////////////////////////

int main ()
{

  // instantiate class for HiLow game
  HiLowTools HiLow;

  // set number of tries allowed
  HiLow.SetMaxNumberOfGuesses();

  // welcome the user
  HiLow.Welcome();

  // get guesses
  while(HiLow.Guess());

  // show results of game
  HiLow.Results();

  // end of program
  return(0);

} // endmain



