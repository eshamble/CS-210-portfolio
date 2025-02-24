using namespace std;

#include <iostream>
#include <map>
#include <string>
#include <fstream>

#include "MapHandler.h"

//Adds an item to the map, OR increases the frequency of the item if the item is already on the map.
void MapHandler::addToMap(string word) {
	if (itemFrequency.find(word) == itemFrequency.end()) {
		itemFrequency.emplace(word, 1);
		items.push_back(word);
	} else {
		itemFrequency.at(word) = itemFrequency.at(word) + 1;
	}
}

//Prints the count of an item the user requests.
void MapHandler::printItemCount(string userInput) {
	if (itemFrequency.find(userInput) == itemFrequency.end()) {
		cout << "The list does not have " << userInput << "." << endl;
	} else {
		cout << userInput << " count: " << itemFrequency.at(userInput) << endl;
	}
}

//Prints every item in the map and its frequency.
void MapHandler::printFrequencyNumbers() {
	cout << endl << "Frequency List: " << endl;
	for (int i = 0; i < items.size(); i++) {
		cout << items[i] << " " << itemFrequency.at(items[i]) << endl;
	}
	cout << endl;
}

//Prints every item in the map and prints its frequency as a histogram.
void MapHandler::printFrequencyHistogram() {
	cout << endl << "Frequency Histogram: " << endl;
	for (int i = 0; i < items.size(); i++) {
		cout << items[i] << " ";
		for (int j = 0; j < itemFrequency.at(items[i]); j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

//Displays the menu to the user.
void MapHandler::displayMenu() {
	cout << "Menu:" << endl;
	cout << "Enter 1 to search for an item's frequency." << endl;
	cout << "Enter 2 to print a list of items and their frequencies." << endl;
	cout << "Enter 3 to print a histogram of items and their frequencies." << endl;
	cout << "Enter 4 to exit the program." << endl;
}

//Reads the input file, populates the map, and creates backup data file.
void MapHandler::readFile(string fileName) {

	//creates input file and temporary variable
	ifstream inputFile;
	string tmp;

	//opens input file
	inputFile.open("CS210_Project_Three_Input_File.txt");

	//Adds everything in the input file to the map.
	while (!inputFile.eof()) {
		inputFile >> tmp;
		addToMap(tmp);
	}

	//Closes the input file, it is no longer necessary.
	inputFile.close();

	//Creating/accessing output file
	ofstream outputFile("frequency.dat");

	//Loops through map and adds each item to the output file
	for (int i = 0; i < items.size(); i++) {
		outputFile << items[i] << " " << itemFrequency.at(items[i]) << endl;
	}

	//closes output file.
	outputFile.close();
}