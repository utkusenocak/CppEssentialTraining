#include <iostream>
using namespace std;

class Rational {
private:
	int _n = 0;
	int _d = 1;
public:
	Rational(int numerator = 0, int denominator = 1) : _n(numerator), _d(denominator) {};
	Rational(const Rational& rhs) : _n(rhs._n), _d(rhs._d) {}; // copy constructor
	~Rational();
	inline int numerator() const { return _n; }
	inline int denominator() const { return _d; }
	Rational& operator = (const Rational&);
	Rational operator + (const Rational&) const;
	Rational operator - (const Rational&) const;
	Rational operator * (const Rational&) const;
	Rational operator / (const Rational&) const;
};

Rational::~Rational() {
	_n = 0; _d = 1;
}

Rational& Rational::operator= (const Rational& rhs) {
	if (this != &rhs) {
		_n = rhs.numerator();
		_d = rhs.denominator();
	}

	return *this;
}

Rational Rational::operator+ (const Rational& rhs) const {
	return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator- (const Rational& rhs) const {
	return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator* (const Rational& rhs) const {
	return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator/ (const Rational& rhs) const {
	return Rational(_n * rhs._d, _d * rhs._n);
}

std::ostream& operator<< (std::ostream& o, const Rational& r) {
	if (r.denominator() == 1) return o << r.numerator();
	else return o << r.numerator() << '/' << r.denominator();
}

int main()
{
	Rational a = 7; // _n = 7 _d = 1
	cout << "a is: " << a << endl;
	Rational b(5, 3); // _n = 5 _d = 3
	cout << "b is: " << b << endl;
	Rational c = b; // copy constructor
	cout << "c is: " << c << endl;
	Rational d; // default constructor
	cout << "d is: " << d << endl;
	
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;

	return 0;

}