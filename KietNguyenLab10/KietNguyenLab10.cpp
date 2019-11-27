// Kiet Nguyen
// Nov 27, 2019
// Dr. Cox
// CMPS 1155 Lab 10
// Description: This program has a variable that is an array of maximum size of 30. It reads the values from the file
//				and put them into the array, alerting the user when the array reached capacity. Output the 
//				average of the entered values to the console. 

#include <iostream>
#include <fstream>
using namespace std;

// declaring functions
void explain_prog(ostream& os);
// pre: none
// post: program explanation printed to the screen

void display_nice(ostream& os);
// pre: none
// post: rounds double to two decimal places

int main() {
	// variables
	double num, total = 0;
	int i = 0;
	const int MAXARRAY = 30;
	double listNum[MAXARRAY];

	// declaring file streams
	ifstream infile;
	infile.open("numbers.txt");
	
	// check if the input file exists
	if (infile.fail()) {
		cout << "We cannot open the program!";
		exit(1);
	}

	// print out the program description to the console
	explain_prog(cout);

	// fix decimals points
	display_nice(cout);

	// pulling entries from numbers.txt
	while (infile >> num) {
		// to check if the array has overflowed
		if (i >= MAXARRAY) {
			break;
		}

		// else, compute and store as normal
		listNum[i] = num;
		i++;
		total += num;
	}

	// printing stuffs out
	cout << "Your array of size " << i << " is filled!" << endl;
	cout << "The last value entered is " << listNum[i-1] << endl;
	cout << "The average of the values in the array is " << (total / (i)) << endl;

	// close file stream(s)
	infile.close();

	// end program
	cout << "Thank you for using the program!" << endl;
	return 0;
}

// functions definition
void explain_prog(ostream& os) {
	os << "This program has a variable that is an array of maximum size of 30.\n"
		<< "It reads the values from the file and put them into the array,\n"
		<< "alerting the user when the array reached capacity.\n"
		<< "Output the average of the entered values to the console.\n\n";
}

void display_nice(ostream& os) {
	os.setf(ios::showpoint);
	os.setf(ios::fixed);
	os.precision(2);
}

