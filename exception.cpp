#include <iostream>
#include <exception>
using namespace std;

class E : public exception {
private:
	const char* msg;
	E();
public:
	E(const char* s) throw() : msg(s) {}
	const char* what() const throw() { return msg; }
};

const E e_ouch("ouch!");
const E e_bad("Bad code");

void broken() {
	cout << "This is a broken function" << endl;
	throw e_ouch;
}

int main()
{
	cout << "Let's have an emergency!" << endl;
	try {
		broken();
	}
	catch (E& e) {
		cout << e.what() << endl;
	}
	
	return 0;
}