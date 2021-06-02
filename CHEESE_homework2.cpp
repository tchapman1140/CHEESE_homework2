// Homework2_CHEESE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//A cheese container can hold 2.76 kg of cheese. Each evening, a fromager ships containers of cheese to a local grocery store. 
//The cost of producing one container of cheese is $4.12, and the profit of each container of cheese is $1.45.
//
//THIS PROGRAM MUST:
//Prompts the user to enter the total amount of cheese produced each evening.
//Outputs the number of containers needed to hold the cheese. (Round your answer to the nearest integer.)
//Outputs the cost of producing the cheese.
//Outputs the profit for producing cheese.

#include <iostream>
#include <iomanip> //This is so I can manipulate the numbers..... ex: setprecision(n) This determines the number of decimal places
#include <string> 

using namespace std;	//needed for cout and cin

//defined constants (const), these are doubles because they are decimals 
//programmers usually use all CAPS for constants
const double MAX_CHEESE = 2.76;	    //A container can hold a max of 2.76kg of cheese
const double COST_OF_CHEESE = 4.12;	//Cost per one container of cheese
const double PROFIT = 1.45;			//Profit per on container of cheese
//

int main() {
	//showing the use of formatting tools
	cout << setw(80) << setfill('*') << "" << endl;		//this will print out 80 '*'
	cout << setw(50) << setfill('*') << right << "YUM, Lets make some cheese!" << left << setw(30) << setfill('*') << "" << endl;	//centering my text within 80 collumns
	cout << setw(80) << setfill('*') << "" << endl << endl;	//setw() = sets a number of collumns, setfill()= allows you to fill in thoes blank collumns when needed

	//Asking user for total amount of cheese in kilograms
	int amount_of_cheese; //declare as int
	cout << "Please enter the total number of kilograms of cheese produced: ";
	cin >> amount_of_cheese;	//input from user

	//Outputs the number of containers needed to hold the cheese. (Round your answer to the nearest integer.)
	int iContainers = ceil(amount_of_cheese / MAX_CHEESE);		//ceil rounds to the nearest integer. floor() rounds down
	string s = "The number of containers to hold the cheese is: ";	//creating a string to make it easier when doing the cout 

	cout << setfill('.');	//chainging the fill from * to ., This true for the remaining format unless specified 
	cout << setw(60) << left << s << setw(20) << right << "." << iContainers << endl;	//i am adding in "." so it is even with the "$" in the following lines

	//Outputs the cost of producing the cheese.
	//Use to_string() to convert an integer to a string..... 
	string s1 = "The cost of producing " + to_string(iContainers) + " container(s) of cheese is: ";
	double cost_to_produce = iContainers * COST_OF_CHEESE;	//equation to determine the cost to produce iContainers

	cout << setw(60) << left << s1 << setw(20) << right << "$" << setprecision(2) << fixed << cost_to_produce << endl;	//setprecision is a iomanipulation that determines the number of decimal places, 2
	//fixed = fixed decimal notation. Without including this, the ouput would be in scientific notation

	//Outputs the profit for producing cheese.
	string s2 = "The profit from producing " + to_string(iContainers) + " container(s) of cheese is: ";

	cout << setw(60) << left << s2 << setw(20) << right << "$" << setprecision(2) << fixed << iContainers * PROFIT << endl;
	//cout << setw(....) << left << s1 <<  setw(...) << right << '$' << iContainers * COST << endl; ............ Professor example

	return 0;
}


