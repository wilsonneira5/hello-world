// Randomly generate numbers between 1 and 1000 for user to guess.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessGame(); // function prototype
bool isCorrect( int , int ); // function prototype

int main()
{
    srand( time( 0 ) ); // seed random number generator
   guessGame();

   return 0; // indicate successful termination

} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess
void guessGame()
{
   int answer; // randomly generated number
   int guess; // user's guess
   char response; // 'y' or 'n' response to continue game

   // loop until user types 'n' to quit game
   do {
      // generate random number between 1 and 1000
      // 1 is shift, 1000 is scaling factor
      answer = 1 + rand() % 1000;

      // prompt for guess
      cout << "I have a number between 1 and 1000.\n"
           << "Can you guess my number?\n"
           << "Please type your first guess." << endl << "? ";
      cin >> guess;

      // loop until correct number
      while ( !isCorrect( guess, answer ) ) 
         cin >> guess;

      // prompt for another game
      cout << "\nExcellent! You guessed the number!\n"
           << "Would you like to play again (y or n)? ";
      cin >> response;

      cout << endl;
   } while ( response == 'y' );
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
bool isCorrect( int g, int a )
{
   // guess is correct
   if ( g == a )
      return true;

   // guess is incorrect; display hint
   if ( g < a )
      cout << "Too low. Try again.\n? ";
   else
      cout << "Too high. Try again.\n? ";

   return false;
} // end function isCorrect