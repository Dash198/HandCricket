#include "BatFirst.h"
#include <iostream>
using namespace std;
int uc = 0, cc = 0, score = 0, flag = 0, cs = 0;

void BatFirst::Bat()
{
	
	cout << "You are batting first\nEnter a number between 1 to 10\n";
	cin >> uc;
	while (true) {
		cc = (1 + (rand() % 10));
		cout << "Computer's number : " << cc<<"\n";
		if (uc == cc || uc > 10) {
			if (uc == cc)
				flag = 1;
			else
				flag = 0;
			break;
		}
		score += uc;
		cout << "Score : " << score << "\nEnter a number between 1 to 10\n";
		cin >> uc;
	}
	if (flag == 1)
		cout << "The computer outsmarted you! You were out!\n\n";
	else
		cout << "Wrong Number! You were out!\n\n";
	flag = 0;
	cout << "Second Innings\nScore required to win : " << score + 1 << "\n\n";
	cout << "You are bowling\nEnter a number from 1 to 10\n";
	cin >> uc;
	while (true) {
		cc = (1 + (rand() % 10));
		if (uc == cc||cs>score+1||uc>10) {
			if (uc == cc)
				flag = 1;
			else if (cs > score+1)
				flag = 2;
			else
				flag = 0;
			break;
		}
		cs += cc;
		cout << "Computer's number : " << cc << "\nComputer's score "<<cs<<"\nEnter a number between 1 to 10\n";
		cin >> uc;
	}
	if (flag == 2)
		cout << "The computer has successfully chased your score! You lose!\n\n";
	else if (flag == 1)
		cout << "The computer is out! You win!\n\n";
	else
		cout << "Wrong number! You lose!\n\n";
}

void BatFirst::Bowl()
{
	cout << "You are bowling first\nEnter a number between 1 to 10\n";
	cin >> uc;
	while (true) {
		cc = (1 + (rand() % 10));
		if (uc == cc || uc > 10) {
			if (uc == cc)
				flag = 1;
			else
				flag = 0;
			break;
		}
		cs += cc;
		cout << "Computer's number : " << cc << "\nComputer's score " << cs << "\nEnter a number between 1 to 10\n";
		cin >> uc;
	}
	if (flag == 1)
		cout << "You outsmarted the computer! The computer was out!\n";
	else {
		cout << "Wrong number! You lose!\n";
		return;
	}
	cout << "Second Innings\nScore required to win : " << cs << "\n Enter a number between 1 to 10\n";
	cin >> uc;
	while (true) {
		cc = (1 + (rand() % 10));
		cout << "Computer's number : " << cc << "\n";
		if (uc == cc || score>cs || uc > 10) {
			if (uc == cc)
				flag = 1;
			else if (score > cs)
				flag = 2;
			else
				flag = 0;
			break;
		}
		score += uc;
		cout << "Score : " << score << "\nEnter a number between 1 to 10\n";
		cin >> uc;
	}
	if (flag == 1)
		cout << "You were out! You lost!\n";
	else if (flag == 2)
		cout << "You chased the target! You won!\n";
	else
		cout << "Wrong number! You lost!";
}
