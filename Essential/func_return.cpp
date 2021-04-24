#include <iostream>
#include <string>
using namespace std;

const string& func();
int main()
{
	printf("this is main()\n");
	const string& s = func();
	printf("func() returns %s\n", s.c_str());
	return 0;
}

const string& func()
{
	const static string s = "this is a func()";
	return s;
}