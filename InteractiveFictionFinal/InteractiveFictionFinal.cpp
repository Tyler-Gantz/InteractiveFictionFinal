// InteractiveFiction.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string getPlayerText() {

	string playerText = "";
	cout << "What would you like to do?" << endl;
	cin >> playerText;
	return playerText;
}

string getPlayerCombinationGuess() {
	string guess = "000";
	cout << "What is your combination guess" << endl;
	cin >> guess;
	return guess;
}


int main()
{
	bool keyOwned = false;
	bool comboGuessed = false;
	bool escaped = false;

	string combination = "106";
	cout << "You are in a small room with no windows and must escape." << endl;
	cout << "try to look around and find a way out." << endl;

	string text = getPlayerText();
	while (escaped != true) {
		if ((text == "look") || (text == "look around") || (text == "Look") || (text == "Look around")) {
			cout << "The room is small there apears to not have much in it." << endl;
			cout << "There is a locked door that has a  keyhole 'There must be a key somewhere' you think." << endl;
			cout << "There is a small safe on the table that has a three number password." << endl;
			cout << "You also see a small piece of paper on the floor." << endl;
			cout << "What would you like to look at now the Door, the Paper, or the Safe." << endl;
			text = "";
			cin >> text;
		}
		if ((text == "paper") || (text == "Paper")) {
			cout << "You look at the piece of paper and see three equation." << endl;
			cout << "1st = 3 + 4 - 2 x 3  2nd = 200 x 0  3rd = half a dozen." << endl;
			cout << "Maybe the anwser will help me figure something else out" << endl;
			cout << "What would you like to look at now, the Door, the Paper or the Safe." << endl;
			text = "";
			cin >> text;
		}
		if ((text == "safe") || (text == "Safe")) {
			cout << "the safe has a keypad with blank space." << endl;
			cout << "the combination must be around here somewhere." << endl;
			cout << "would you like to try and unlock it?" << endl;
			text = "";
			cin >> text;
			if ((text == "yes") || (text == "Yes")) {
				while (comboGuessed != true) {
					string guess = getPlayerCombinationGuess();
					if (guess == combination) {
						cout << "The safe opens inside is a small key that you pick up." << endl;
						comboGuessed = true;
						keyOwned = true;
					}
					else {
						cout << "that is not correct try again.";
					}
				}
				if ((text == "no") || (text == "No")) {
					cout << "You back away from the safe what would you like to look at now" << endl;
					cout << "the Door, the Paper or the Safe." << endl;
					text = "";
					cin >> text;
				}
			}
		}
		if ((text == "door") || (text == "Door") && (keyOwned == false)) {
			cout << "You pull and kick the door but it seems it wont open without a key" << endl;
			cout << "What would you like to look at now the Door, the Paper or the Safe?" << endl;
			text = "";
			cin >> text;
		}
		if ((text == "door") || (text == "Door") && (keyOwned == true)) {
			escaped = true;
			cout << "The door opens and you walk out." << endl;
			cout << "A man is standing outside and says," << endl;
			cout << "Congrats on escaping the room and hands you $100" << endl;
			cout << "You have escaped." << endl;
			cout << "Game Over";
		}
		else {
			cout << "The input was not understood please try again" << endl;
			text == "";
			cin >> text;
		}
	}
	return 0;
}

