#include <iostream>
using namespace std;

constexpr unsigned long int factorial(const unsigned long int);

int main()
{
	const unsigned long int n = 5;
	printf("Factorial of %lu is %lu\n", n, factorial(n));
	return 0;
}

constexpr unsigned long int factorial(const unsigned long int n) {
	if (n < 2) return 1;
	return factorial(n - 1) * n;
}