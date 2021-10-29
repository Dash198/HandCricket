#include <iostream>
#include "BatFirst.h"
using namespace std;
int main() {
	BatFirst bf;
	int choice = 1;
	while (choice == 1) {
		string bob = "";
		cout << "Welcome to a new game of handricket! Would you like to bat or bowl first?\n";
		cin >> bob;
		if (bob == "bat")
			bf.Bat();
		else if (bob == "bowl")
			bf.Bowl();
		else
			cout << "Wrong Input!\n";
		cout << "Press 1 to play again, any other number to quit\n";
		cin >> choice;
	}
}