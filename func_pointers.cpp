#include <iostream>
using namespace std;

void func();
int main()
{
	void (*pfunc)() = func;
	printf("this is main()\n");
	pfunc();

	return 0;
}

void func()
{
	printf("this is func()\n");
}