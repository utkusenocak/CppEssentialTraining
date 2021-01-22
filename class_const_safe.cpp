#include <iostream>
using namespace std;

class A1 {
private:
	int i = 0;
public:
	void setValue(int value);
	int getValue() const; //const safe
	int getValue();
};

void A1::setValue(int value) {
	i = value;
}

int A1::getValue() const{
	printf("const getValue()\n");
	return i;
}

int A1::getValue() {
	printf("mutable getValue()\n");
	return ++i;
}
int main()
{
	int i = 47;
	A1 o1;

	o1.setValue(i);
	printf("value is %d\n", o1.getValue());

	const A1 o2;
	printf("value is %d\n", o2.getValue());

	return 0;

}