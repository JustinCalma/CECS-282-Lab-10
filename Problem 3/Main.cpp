// Justin Calma
// CECS 282 Lab 10 Problem 2

// Driver file of the program containing the main function

#include "PointerDataClass.h"
#include <iostream>
#include <string>
using namespace std;

// Definition of the main function for the program
int main() {
	
	// Construct an object list1 of type pointerDataClass
	// Creates an array of size 10
	pointerDataClass list1(10); 
	
	// Insert the desired values at the specified indices
	list1.insertAt(0, 50); 
	list1.insertAt(4, 30);
	list1.insertAt(8, 60);
	cout << "List1: " << endl;
	
	// Display the created list to the user
	list1.displayData();
	
	cout << "List 2: "<< endl;
	
	// Invoke copy constructor. Create a copy of list1 and call it list2
	pointerDataClass list2 = list1;
	
	// Display list2 to the user
	list2.displayData();
	
	// Insert the desired value at the specified index in list1
	list1.insertAt(4,100);
	
	// Output the modified list1 after it has inserted the new value
	cout << "List1: (after insert 100 at index 4) " << endl;
	list1.displayData();
	
	// Output list2 to the user
	cout << "List 2: "<< endl;
	list2.displayData();
	
	// Return 0 to main
	return 0;
	
}
