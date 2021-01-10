#include <iostream>
using namespace std;

class S
{
public:
	int static_value()
	{
		static int x = 7;
		return ++x;
	}
};

int func()
{
	static int x = 7;
	return ++x;
}
int main()
{
	S a;
	S b;
	S c;
	cout << "a.static_value is " << a.static_value() << endl;
	cout << "b.static_value is " << b.static_value() << endl;
	cout << "c.static_value is " << c.static_value() << endl;
	/*
	int i = 47;
	i = func();
	cout << "The integer is " << i << endl;
	i = func();
	cout << "The integer is " << i << endl;
	i = func();
	cout << "The integer is " << i << endl;*/ 
	return 0;
}