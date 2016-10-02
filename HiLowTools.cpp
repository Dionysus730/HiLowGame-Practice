//////////////////////////////////////////////////////////////////////////////////
// class for HiLow game, implementation file
//
// Date: 9/30/2016
// Language: c++11 (is there any other?)
// Company: Titan Robotics
// Author: The RoboCoders
// Copyright (c) 2016-3016 Titan Robotics
//
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>  // cout, cin, etc for keyboard input and ouput
#include <cstdlib>   // rand() for generating random numbers
#include <ctime>     // time() for seeding random number generator
#include <conio.h>   // getch() for reading a single character
#include "HiLowTools.hpp" // definitions file for class

using namespace std; // standard c++ namespace

///////////////////////////////////////
// class constructor
///////////////////////////////////////
HiLowTools::HiLowTools()
{

}//endmethod


///////////////////////////////////////
// class destructor
///////////////////////////////////////
HiLowTools::~HiLowTools()
{

}//endmethod


/////////////////////////////////////////////////
// Set the max number of guesses allowed
/////////////////////////////////////////////////
void HiLowTools::SetMaxNumberOfGuesses()
{

}//endmethod

///////////////////////////////////////
// method to welcome player to the game
// and reset variables
///////////////////////////////////////
void HiLowTools::Welcome()
{

} //endmethod

////////////////////////////////////
// method to get guess from player
// returns 0 if correct, 1 if not correct
////////////////////////////////////
int HiLowTools::Guess()
{

} // endmethod


////////////////////////////////////
// shows results of game
////////////////////////////////////
void HiLowTools::Results()
{

}//endmethod


/////////////////////////////////////////////////
// method for generating a random number between
// two values.
/////////////////////////////////////////////////
int HiLowTools::RandomInt(int low, int high)
{

   // seed random number generator so values don't
   // repeat every time program is run using time
   time_t timer;
   time(&timer);
   timer = timer << 8;  // reduce to two bytes
   timer /= 2;          // reduce to make sure signed int isn't exceeded
   srand ((int)timer);

   // get random number
   int RawRand = rand();

   // scale so it is between the two limits
   double scale = (double)(high-low+1)/(double)RAND_MAX;
   int FinalRand = (int)((double)RawRand * scale);

   // return value
   return(FinalRand);

}// end method

