// Header file for the class PointerDataClass

#ifndef POINTERDATACLASS_H
#define POINTERDATACLASS_H

#include <iostream>
#include <string>
using namespace std;

// Class definition for class pointerDataClass
class pointerDataClass { 

	// Declare the private attributes of the class
	private:
		
		// Variable to store the maximum size of p
		int maxSize;
	
		// Variable to store the number of elements in p
		int length;
		
		// Pointer to an int array
		int *p; 

	// Declare the public functions of the class
	public:
		
		// Constructor to create an array of the size specified by the parameter size.
		pointerDataClass(int size);
		
		// Destructor to deallocate the memory space occupied by the array p
		~pointerDataClass();
		
		// The function insertAt inserts num into array p at the position specified by index
		void insertAt(int index, int num);
		
		// The function displayData displays all the array elements in p
		void displayData(); 

}; 

#endif
