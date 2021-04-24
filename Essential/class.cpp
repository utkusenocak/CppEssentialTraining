#include <iostream>
using namespace std;

//simple class
class C1 {
private:
	int i = 0;
public:
	void setValue(int);
	int getValue();
};

void C1::setValue(int value) {
	i = value;
}

int C1::getValue() {
	return i;
}
int main()
{
	int i = 47;
	C1 o1;
	o1.setValue(i);
	printf("value is %d\n", o1.getValue());
	return 0;
}