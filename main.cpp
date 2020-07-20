#include <iostream>

#include "bitwise.h"

using std::cout;
using std::endl;

void printBinaryRepresentation()
{
	cout << "*** Binary Representation ***\n";
	cout << "11:\t";
	binaryRepresentation(11);
	cout << "-11:\t";
	binaryRepresentation(-11);
}

void powerOfTwo()
{
	cout << "\n*** Power of 2 ***\n";
	cout << "32:\t" << isPowerOfTwo(32) << "\n45:\t" << isPowerOfTwo(45) << endl;
}

void cyclicBitShifting()
{
	cout << "\n*** Cyclic shift ***\n";
	
	binaryRepresentation(11);
	cout << "Right shift (4):\n";
	binaryRepresentation(rightShift(11, 4));
	cout << "Left shift (4):\n";
	binaryRepresentation(leftShift(11, 4));
	
}


int main()
{
	printBinaryRepresentation();
	
	powerOfTwo();
	
	cyclicBitShifting();
	
	return 0;
}
