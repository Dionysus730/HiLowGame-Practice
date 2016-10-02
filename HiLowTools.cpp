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
    // initialize variables to something

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
    // loop for entry checking
    for(int i=1; i <= 2; i++)
    {

        // prompt for max number of guesses

        // if within range,exit loop

        // if out of range, deal with this guy
        switch(i)
        {
        }// endswitch

    }//endfor

}//endmethod

///////////////////////////////////////
// method to welcome player to the game
// and reset variables
///////////////////////////////////////
void HiLowTools::Welcome()
{

   // show welcome message with number of guesses allowed

   // Set a number between 1 and 100 and zero out the number of guesses so far

} //endmethod

////////////////////////////////////
// method to get guess from player
// returns 0 if correct, 1 if not correct
////////////////////////////////////
int HiLowTools::Guess()
{
   // allocate variable for return value

    // bump up number of tries

   // get number from player

   // if higher than target set return value to 1

   // if lower than target set return value to 1

   // case for too many tries

   return(1);

} // endmethod


////////////////////////////////////
// shows results of game
////////////////////////////////////
void HiLowTools::Results()
{
   // case for winner

   // case for loser

   // blank line

   // pause to let player read results

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

