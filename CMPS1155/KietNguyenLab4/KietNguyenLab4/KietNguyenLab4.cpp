// Kiet Nguyen
// Oct 2, 2019
// Dr. Cox
// CMPS 1155 - Lab 4

/* This program allows a user to input their monthly entertainment 
*	budget. Allow them to input the expenses. And check if they exceed 
*	their budget or not and if they are exactly on budget.
*/

#include<iostream>;
using namespace std;

int main() {
	// variables
	double budget, expense, spent=0;
	char ans;

	/* variables conditions:
	budget is a positive double
	expense is a positive double
	ans is either 'Y', 'y', 'N' or 'n'
	*/

	// fixing round decimals
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	// START
	// ask for user's monthly budget
	cout << "Please enter your monthly entertainment budget. ";
	cin >> budget;
	cout << "\n"; // for readability

	// looping, asking for user expense
	do {
		// ask for each expense entry
		cout << "Enter your expense: ";
		cin >> expense;
		budget -= expense;
		spent += expense;

		// ask if the user wants to enter more
		cout << "Do you have an expense to input (Y/y for yes, N/n for no): ";
		cin >> ans;
	} while (ans == 'Y' || ans == 'y');
	// check variables conditions at line:19

	// check budget status
	cout << "\nYou spent $" << spent << ". ";
	if (budget > 0) {
		cout << "You're under budget!\n";
	}
	else if (budget == 0) {
		cout << "You're EXACTLY on budget!\n";
	}
	else { // budget < 0
		cout << "You have exceeded your budget :(\n";
	}

	// END
	system("pause");
	return 0;
}
