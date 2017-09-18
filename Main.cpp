#include <iostream>
#include <fstream>

using namespace std;

int main() {

	//Initializing variables
	double i;
	int counter = 0;
	int index = 0;

	//Creating ifstream Object
	ifstream infile("text.txt", ios::out);

	//Checking if file exists
	if (!infile) {
		cout << "There was a problem opening file " << endl;

		return 0;
	}

	//Loop to check the number of numbers in file
	while (infile >> i) {
		if (counter == 0 || counter == 1) {
			cout << i << endl;            //Printing the First and second number
		}

		counter++;
	}

	//Setting the pointer back to the start
	infile.clear();
	infile.seekg(0);

	//Loop to determine the last two numbers on the file
	while (infile >> i) {
		//cout << i << endl;
		index++;
		if (index == counter) {
			cout << i << endl;
		}
		if (index == counter-1) {
			cout << i << endl;
		}
	}

	cout << "Number of elements: " << counter << endl;



	return 0;
}
