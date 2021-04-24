#include <iostream>
using namespace std;

#ifndef NULL
#define NULL (0LL) // Common C++ definition
#endif // !NULL

void f(int i)
{
	printf("int is %d\n", i);
}

void f(const char* s)
{
	printf("the pointer is %p\n", s);
}

int main()
{
	f(NULL);
	f(nullptr);
	return 0;
}