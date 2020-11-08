// Implementation file for the class Gamma

#include "Gamma.h"
#include <iostream>
#include <string>
using namespace std;

// Default Constructor
gamma::gamma() {
	
	// Set the count of the objects to be 1 more than before
	count++;
	
	// Set the ID to be the count
	id = count;
	
}

// Destructor to deallocate the memory saved by the object
gamma::~gamma() {
	
	// Output a message to the user telling which object is being deallocated
	cout << "Destroying ID number: " << id << endl;
	
}

// Function that will display how many gamma objects were created
void gamma::showtotal() {
	
	// Output the count to the user
	cout << "Total is: " << count << endl;
	
}

// Function that will display the ID of the current object
void gamma::showid() {
	
	// Output a message to the user telling the ID number of the object
	cout << "ID number is: " << id << endl;
	
}

