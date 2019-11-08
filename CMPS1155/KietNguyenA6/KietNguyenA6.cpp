// Kiet Nguyen
// Nov 8, 2019
// Dr. Cox
// CMPS 1155 - Assignment 7

#include <iostream>
using namespace std;

// functions
void explain_prog();
// pre: none
// post: explain what a program does

void get_letter(char& userInput);
// pre: none
// post: get user's input for a character

void compute_letter(char userInput, int& validletter);
// pre: a valid letter is obtained, a counter for that letter is accorded
// post: increment the count of the correct letter by 1, accordingly

int main() {
	char ans;
	int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

	// explain prog
	explain_prog();

	do {
		
	} while (ans != 'z' && ans != 'Z');

	system("pause");
	return 0;
}

void explain_prog() {
	cout << "This program allows you to enter letter grades of A, B, C, D or F\n"
		<< "and counts the number of A's, B's, C's, D's and F's.\n"
		<< "You should enter a grade of Z to end data entry.\n\n";
}

void get_letter(char& userInput) {
	cout << "P"
}

void compute_letter(char userInput, int& validletter);