#include <iostream>
using namespace std;

//unsigned 8 bt to string
const char* u8_to_cstr(const uint8_t& x)
{
	static char buf[sizeof(x) * 8 + 1];
	for (char c : buf) c = 0;
	char* bp = buf;
	for (uint8_t bitmask = 0b10000000; bitmask; bitmask >>= 1) {
		*(bp++) = x & bitmask ? '1' : '0';
	}
	return buf;
}
int main()
{
	uint8_t x = 5;
	uint8_t y = 10;
	uint8_t z = x | y; //bitwise or | bitwise and & bitwise xor ^ bitwise not ~ bitwise shift <<

	printf("x is %s\n", u8_to_cstr(x));
	printf("y is %s\n", u8_to_cstr(y));
	printf("result is %s\n", u8_to_cstr(z));
	return 0;

}