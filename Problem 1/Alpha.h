// Header file for class Alpha

#ifndef ALPHA_H
#define ALPHA_H

#include <iostream>
#include <string>
using namespace std;

// Create class alpha
class alpha {
	
	// Declare the private attribute for the class
	private:
		int data;
	
	// Declare the public functions for the class
	public:
		// YOUR CODE
		// Default Constructor
		alpha();
		
		// Single argument constructor
		alpha(int d);
		
		// Copy constructor
		alpha(alpha &a);
		
		// Function to display the data of each object to the user
		void display();
		

};

#endif
