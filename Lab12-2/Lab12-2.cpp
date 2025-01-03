#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;
void pressEnterToContinue();
void readFromCSVFile(string filename);

int main() {
	cout << "Lab 12 Intro to Text Files!\n";

	string datafile;
	cout << "Enter filename: ";
	getline(cin, datafile);
	readFromCSVFile(datafile);
	pressEnterToContinue();
}

void pressEnterToContinue() {
	cout << "\nPress enter to continue...\n";
	cin.clear();
	while (cin.get() != '\n') continue;
}

void readFromCSVFile(string filename) {
	ifstream inFile;
	istringstream thisLine;
	string word;
	char character;
	int counterWords=0;
	int characterCounter=0;

	inFile.open(filename);
	if (inFile.fail()) {
		cout << "read error sorry \n";
	}
	while (true) {
		inFile >> word;;
		counterWords++;
		for (int i = 0; i < word.length(); i++) {
			characterCounter++;
		}
		if (inFile.eof()) break;
	}

	cout << "Words: " << counterWords << endl;
	cout << "Characters: " << characterCounter << endl;
	inFile.close();

}