#include <iostream>


using namespace std;


// Introduce the game
void PrintIntro() {

   constexpr int WORD_LENGTH = 5;

   cout << "Welcome to Bulls and Cows.\n\n";
   cout << "Guess the " << WORD_LENGTH << " Letter isogram\n";

}

string GetPlayerGuess() {
   string Guess;

   cout << "Enter Guess: \n";
   std::getline(cin, Guess);

   cout << "Your Guess was: " << Guess << endl;
   return Guess;
}

int main() {

   PrintIntro();

   GetPlayerGuess();

   return 0;
}