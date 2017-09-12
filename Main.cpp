#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int i;
	int counter = 0;
	int index = 0;


	ifstream infile("text.txt", ios::out);

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
	infile.clear();
	infile.seekg(0);

	//char buffer[2];
	//infile.read(buffer, 1);
	//buffer[1] = 0;

	//cout << buffer << endl;

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

	system("pause");

	return 0;
}
