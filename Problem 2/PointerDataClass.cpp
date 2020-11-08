// Implementation file for the class PointerDataClass 

#include "PointerDataClass.h"
#include <iostream>
#include <string>
using namespace std;

// Single argument constructor to create an array of the size specified by the parameter size 
pointerDataClass::pointerDataClass(int size) {
	
	// Set the maxSize of the array to be the passed in value
	maxSize = size;
	
	// Initialize the array pointer to the created array with the desired size
	p = new int [maxSize];
	
//	cout << maxSize << endl;
	
}

// Destructor to deallocate the memory space occupied by the array p
pointerDataClass::~pointerDataClass() {
	
	// Use the delete[] keyword to delete the array and deallocate the memory
	delete[] p;
	
}

// Function that inserts num into array p at the position specified by index
void pointerDataClass::insertAt(int index, int num) {
	
	cout << "INDEX: " << index;
	cout << " NUM: " << num << endl;
	
	// Insert the num into array p at the desired index 
	p[index] = num;

}

// Displays array p and all of its elements
void pointerDataClass::displayData() {
	
	// Get the total number of elements within the array p
//	length = sizeof(p)/sizeof(p[0]);
//	
//	cout << length << endl;
	
	// Iterate through the array and print out its elements
	for (int i = 0; i < maxSize; i++) {
		
		cout << *(p + i) << " ";
		
	}

	cout << endl;
	
}
