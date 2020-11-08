// Justin Calma
// CECS 282 Lab 10 Problem 4

#include "Gamma.h"
#include <iostream>
#include <string>
using namespace std;

// Driver file of the program that contains the main function

// Initialize static member of class Gamma
int gamma::count = 0;

// Definition of the main function
main () {
	
	// Create an object g1 from class gamma 
	gamma g1;

	// Call showtotal() that will display how many gamma objects were created (1)
	gamma::showtotal();
	
	// Create objects g2 and g3 that are of type gamma
	gamma g2, g3;
	
	// Call showtota() that will display how many gamma objects were created (3)
	gamma::showtotal();
	
	// Show the ID of each of the gamma objects
	g1.showid();
	g2.showid();
	g3.showid();
	
	cout << "----------end of program----------\n";
	
	// Return 0 to the main function
	return 0;
	
}
