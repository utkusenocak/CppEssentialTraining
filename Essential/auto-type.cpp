#include <iostream>
using namespace std;

string func()
{
	return string("this is a string");
}

int main()
{
	auto x = func();
	printf("x is %s\n", x.c_str());
	if (typeid(x) == typeid(string)) printf("x is string\n");
	return 0;
}