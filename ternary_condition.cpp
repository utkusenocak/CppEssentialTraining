#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int y = 45;
	const char* s = x > y ? "yes" : "no";
	cout << s << endl;
	return 0;
}