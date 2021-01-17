#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	size_t y = sizeof(x); // return as bytes
	printf("size of x is %zd\n", y); 
	return 0;
}