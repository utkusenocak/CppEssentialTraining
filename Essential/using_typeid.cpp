#include <iostream>
using namespace std;

struct A { int x; };
struct B { int x; };

A a1;
B b1;

int main()
{
	printf("type id name is %s\n", typeid(A).name());
	if (typeid(b1) == typeid(A)) {
		printf("same");
	}
	else {
		printf("diffrent");
	}
	return 0;
}