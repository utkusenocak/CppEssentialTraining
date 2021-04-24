#include <iostream>
using namespace std;

int& f(int& i)
{
	return ++i;
}

int main()
{
	int i = 5;
	int& ir = i;
	ir = 10;
	printf("i is %d\n", i);
	printf("f() is %d\n", f(i));
	printf("i is %d\n", i);
	return 0;
}