/*
 * Averager.cpp
 *
 *  Created on: Jul 22, 2015
 *      Author: BlackSound_2
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//name of movie
	string movie = "";
	cout << "What is the name of the movie?\n" << endl;
	getline(cin, movie);

	//Metascore
	int Metascore = 0;
	cout << "What is the Metascore rating for " << movie << "?\n" << endl;
	cin >> Metascore;

	//RT Score
	int Tomatometer = 0;
	cout << "What is the Tomatometer rating for " << movie << "?\n" << endl;
	cin >> Tomatometer;

	//Average
	double average = (Metascore + Tomatometer) / 2;

	//Rescale
	double averageRescaled = average / 10;

	//Display
	cout << "The average score of " << movie << " is " << averageRescaled << endl;

	cout << "Press Enter to escape."<< flush;
	getchar();



	return 0;

}
