#include <iostream>
#include <string>

using namespace std;


void PrintIntro();
void PlayGame();
string GetGuess();

int main () {
	PrintIntro();
	PlayGame();
	return 0;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	return;
}

void PlayGame() {
	constexpr int NUM_GUESSES = 5;
	for (int i = 0; i < NUM_GUESSES; i++) {
		cout << "Your guess was " << GetGuess() << ".\n";
		cout << endl;
	}
}

string GetGuess() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}