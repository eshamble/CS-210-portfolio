#pragma once
#ifndef PROJECT3_MAPHANDLER_H_
#define PROJECT3_MAPHANDLER_H_

using namespace std;

#include <string>
#include <map>
#include <vector>

class MapHandler
{
	private:
		map<string, int> itemFrequency;
		vector<string> items;
	public:
		void addToMap(std::string word);
		void printItemCount(std::string userInput);
		void printFrequencyNumbers();
		void printFrequencyHistogram();
		void displayMenu();
		void readFile(std::string fileName);
};

#endif // PROJECT3_MAPHANDLER_H_
