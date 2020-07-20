#include <iostream>

#include "bitwise.h"

inline void printRepresentation(int num)
{
	for (int i = sizeof(int) * 8 - 1; i >= 0; --i)
    {
        int pos = num >> i;

        if (pos & 1)
            std::cout <<("1");
        else
            std::cout <<("0");
 
    } 
}


void binaryRepresentation(int number)
{
	if (number >= 0)
	{
		printRepresentation(number);
	}
	else
	{
		printRepresentation(~(-number) + 1);
	}
	
	std::cout << std::endl;
}


bool isPowerOfTwo(int number)
{
	return !(number & (number - 1));
}

int leftShift(int number, int shifts)
{
    return (number << shifts) + (number >> (sizeof(int) * 8 - shifts));
}


int rightShift(int number, int shifts)
{
    return (number >> shifts) + (number << (sizeof(int) * 8 - shifts));
}


