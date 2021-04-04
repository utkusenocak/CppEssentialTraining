#include <iostream>
using namespace std;

double avarageCost(double* priceArray, int* count)
{
	double sum = 0;
	for (int i = 0; i < *count; i++)
	{
		sum += *(priceArray + i);
	}
	double avg = sum / *count;
	*count += 5;
	cout << "In function count calue: " << *count << endl;
	return avg;
}

int main()
{
	double prices[5]{ 5.0, 4.50, 3.75, 3.10, 6.75 };
	int quantity = 5;
	double avarage = avarageCost(prices, &quantity);
	cout << "$" << avarage << endl;
	cout << "quantity value: " << quantity << endl;

	return 0;
}