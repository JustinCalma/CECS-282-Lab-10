// Justin Calma
// CECS 282 Lab 10 Problem 1

// Driver file of the program containing the main function

#include "Alpha.h"
#include <iostream>
#include <string>
using namespace std;


// Definition of the main function for the program
int main() {
	
	// Create an object a1 of type alpha with an argument
	alpha a1(37);
	
	// Create an object a2 of type alpha with no arguments
	alpha a2;
	
	// Initialize object a2 to have the same data member values from a1 (Copy constructor)
	a2 = a1; 
	cout << "\na2=";
	a2.display(); // Display a2 to the user
	
	// Invoke copy constructor
	alpha a3(a1); 
	cout << "\na3=";
	a3.display(); // Display a3 to the user
	
	// Declare and Initialize object a4; Invoke copy constructor
	alpha a4 = a1; 
	cout << "\na4=";
	a4.display(); // Display a4 to the user
	cout << endl;

	// Return 0 to main	
	return 0;

}
