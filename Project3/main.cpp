#include "MapHandler.h"
#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main() {
	//Creates string variable to store values temporarily
	string tmp;
	//Creates map handler object
	MapHandler map;

	//THe map handler object reads the file.
	map.readFile("CS210_Project_Three_Input_File.txt");

	//Creates input variable.
	int input = -1;
	//while loop for menu
	while (input < 4){
		map.displayMenu();
		cin >> input;

		if (input == 1) {
			//Prompt user for item, return item frequency
			cout << "Please enter the item you would like to search for: " << endl;
			cin >> tmp;
			map.printItemCount(tmp);
		} 
		else if (input == 2) {
			//Item frequency list
			map.printFrequencyNumbers();
		} 
		else if (input == 3) {
			//Item frequency histogram
			map.printFrequencyHistogram();
		} 
		else if (input == 4) {
			//Exit program
			break;
		}
		else {
			cout << "Invalid input. Try again?" << endl;
			input = -1;
		}
	}

	//Exits program.
	cout << "Exiting program." << endl;
	return 0;
}