// Kiet Nguyen
// Sep 23, 2019
// Dr. Cox
// CMPS 1155 - Assignment 2

#include<iostream>
using namespace std;

int main() {
	// variables
	int index;
	double user_input;
	double pos_sum = 0, nev_sum=0;

	cout << "How many numbers do you wish to enter?" << endl;
	cin >> index;

	while (index > 0) {
		cout << "Please enter a number:  ";
		cin >> user_input;

		// computing
		if (user_input >= 0) {
			pos_sum += user_input;
		}
		else {
			nev_sum += user_input;
		}
		index--;
	}

	// printing
	cout << "\nThe total of all the positive numbers is " << pos_sum << endl;
	cout << "The total of all the negative numbers is " << nev_sum << endl << endl;

	system("pause");
	return 0;
}