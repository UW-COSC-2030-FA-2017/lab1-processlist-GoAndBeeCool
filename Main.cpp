#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i;
	int counter = 0;
	int index = 0;


	ifstream infile("text.txt");

	if (!infile) {
		cout << "There was a problem opening file "
			<< endl;
		system("pause");
		return 0;
	}

	while (infile >> i) {
		if (counter == 0 || counter == 1) {
			cout << i << endl;
		}

		counter++;
	}

	//infile.seekg(0, infile.end);

	infile.seekg(0, infile.ios::beg);

	while (infile >> i) {
		
		if (index == counter - 1 || index == counter) {
			cout << i << endl;
		}
		index++;
	}
	
	cout << counter << endl;

	system("pause");

	return 0;
}