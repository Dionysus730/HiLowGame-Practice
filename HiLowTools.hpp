
//////////////////////////////////////////////////////////////////////////////////
// class for HiLow game, definition file
//////////////////////////////////////////////////////////////////////////////////


// class definition
class HiLowTools
{
    private:
        int  TargetNumber;                 // target number to guess
        int  GuessedNumber;                // number guessed by player
        int  NumberOfGuesses;              // number of guesses made
        int  MaxNumberOfGuesses;           // max number of guesses allowed
        int  RandomInt(int low, int high); // generates a random number between limits
    public:
        HiLowTools();                      // constructor
        ~HiLowTools();                     // destructor
        void Welcome();                    // welcomes player, gives instructions
        int  Guess();                      // gets a guess from user
        void Results();                    // shows results of game
        void SetMaxNumberOfGuesses();      // set the max number of guesses player is allowed

};  //endclass

