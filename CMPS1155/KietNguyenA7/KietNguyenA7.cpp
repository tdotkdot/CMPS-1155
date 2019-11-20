// Kiet Nguyen
// Nov. 20, 2019
// Dr. Cox
// CMPS 1155 - Assignment 7
// Description: This program reads from data.txt, which contains the students initials,
//				the grades of the two quizzes, and the value for the final exam grade.
//				The final grade is calculated based on a pre-set marking scheme and the program
//				will rewrite all the information including the final overall grade onto output.txt.
//				Output.txt will also contain additional information regarding of the number of students,
//				the average final grade for the class, and keeps track of how many students are in which grading scheme.

#include <iostream>
#include <fstream>
using namespace std;

// functions declaration
void explain_prog(ostream& out_stream);
// pre: output stream to file needed
// post: print out to the file information about basic info of this program



int main() {
	// declaring file stream(s)
	ifstream in_stream;
	ofstream out_stream;

	in_stream.open("input.txt");
	// check if input stream opening fails
	if (in_stream.fail()) {
		cout << "Input data file opening fail\n";
		exit(1);
	}



	return 0;
}

// functions
void explain_prog(ostream& out_stream) {
	out_stream << "This program reads from data.txt, which contains the students initials,\n"
		<< "the grades of the two quizzes, and the value for the final exam grade.\n"
		<< "The final grade is calculated based on a pre-set marking scheme and the program\n"
		<< "will rewrite all the information including the final overall grade onto output.txt.\n"
		<< "Output.txt will also contain additional information regarding of the number of students,\n"
		<< "the average final grade for the class, and keeps track of how many students are in which grading scheme.\n\n";
}
