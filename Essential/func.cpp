#include <iostream>
using namespace std;

void func();
int main()
{
	printf("this is main()\n");

	
	func();
	func();
	func();
	return 0;
}

void func()
{
	// i will stay same every time func called (automatic storage)
	//int i = 5;
	//printf("i is %d\n", ++i);
	
	//i will change every time func called (static storage)
	static int i = 5;
	printf("i is %d\n", ++i);
}