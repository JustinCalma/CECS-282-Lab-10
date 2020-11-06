// Implementation file for the class Alpha

#include "Alpha.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
alpha::alpha() {

	// Set the data attribute of the object to be its default value
	data = 0; 
	
}

// Single argument constructor
alpha::alpha(int d) {
	
	// Set the data attribute of the object to be the passed in value
	data = d;
	
}

// Copy Constructor
alpha::alpha(alpha &a) {
	
	// Copy the value of data from object a 
	data = a.data;
	
}

// Function that will display the object and its value to the user
void alpha::display() {
	
	// Display the value of data to the user
	cout << data << endl;;
	
}
