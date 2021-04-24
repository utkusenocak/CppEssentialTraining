#include <iostream>
#include <string>
using namespace std;

class A {
private:
	int ia = 0;
	string sb = "";
	int ic = 0;
public:
	A(const int a, const string& b, const int c) : ia(a), sb(b), ic(c) {};
	void setA(const int a) { ia = a; }
	void setB(const string& b) { sb = b; }
	void setC(const int c) { ic = c; }
	int getA() const { return ia; } //const variable in this functions make this func const safe
	const string& getB() const { return sb; }
	const char* getb_cstr() const { return sb.c_str(); }
	int getC() const { return ic; }
};
int main()
{
	const A a(1, "two", 3);
	printf("ia is %d, sb is %s, ic is %d\n", a.getA(), a.getb_cstr(), a.getC());
	return 0;
}