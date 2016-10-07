#include <iostream>
#include <string>

using namespace std;

int main () {
	// Introduce the game
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	
	// Get the guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	// Repeat the guess back to them
	cout << "Your guess was " << Guess << ". Is that right?\n";
	
	return 0;
}