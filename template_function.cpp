#include <iostream>
using namespace std;

template <typename T>
T maxof(T a, T b) {
	return (a > b ? a : b);
}
int main()
{
	int m = maxof<int>(7, 9);
	printf("max is: %d\n", m);
	return 0;
}