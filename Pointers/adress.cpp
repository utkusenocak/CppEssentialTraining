#include <iostream>
using namespace std;

int main()
{
	int number = 240; //define int variable
	int* numPtr;	//define pointer
	numPtr = &number;	//assign the address to numPtr
	cout << "The address of number is: " << numPtr << endl;

	return 0;
}