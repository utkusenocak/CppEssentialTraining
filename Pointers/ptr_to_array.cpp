#include <iostream>
using namespace std;

int main()
{
	double values[10]; //declare an array
	double* pValue = values; //define a ptr to array
	cout << "value array address: " << values << endl;
	cout << "pValue: " << pValue << endl;

	int numbers[10];
	int* pNumbers = numbers;
	for (int i = 0; i < 10; i++)
	{
		cout << "number address " << i << ": " << pNumbers + i << endl;
	}
	return 0;
}