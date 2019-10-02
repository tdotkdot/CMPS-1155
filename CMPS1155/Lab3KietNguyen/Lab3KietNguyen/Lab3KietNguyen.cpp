// Kiet Nguyen
// Sep 25, 2019
// Dr. Cox
// CMPS 1155 - Lab 3

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// variables
	double num, i; // placeholders
	double userinput, total = 0, avg;

	// fixing decimals
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	// asking for user to input the number of courses
	cout << "Please enter the number of students in your class.\n";
	cin >> num;

	i = num; // placeholder for loops
	
	// user input for midterm grades
	cout << "\n";
	while (i > 0) {
		cout << "Please enter a midterm grade: ";
		cin >> userinput;
		total += userinput; // total = total + userinput
		i--; // overwriting
	}

	// printing midterm average
	avg = total / num;
	cout << "\nThe midterm average is " << avg << "%\n";

	system("pause");

	return 0;
}