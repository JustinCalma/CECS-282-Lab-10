// Implementation file for the class Gamma

#ifndef GAMMA_H
#define GAMMA_H

#include <iostream>
#include <string>
using namespace std;

// Create a class called gamma
class gamma {
	
	// Declare the public attributes of the class
	public:
		
		// Static variable that will keep count of how many gamma objects are created
		static int count;
		
		// Variable that will represent the ID of the current gamma object
		int id;
		
		// Default constructor
		gamma();
		
		// Destructor to dealloate the memory of the created object
		~gamma();
		
		// Function that will display how many gamma objects are created
		static void showtotal();
		
		// Function that will display the ID of the given object
		void showid();
	
};

#endif
