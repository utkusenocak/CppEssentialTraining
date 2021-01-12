#include <iostream>
using namespace std;
struct Preferences
{
	bool likeMusic : 1;
	bool hasHair : 1;
	bool hasInternet : 1;
	bool hasDinosor : 1;
	unsigned int numberOfChilderen : 4;
};
int main()
{
	struct Preferences homer;
	homer.likeMusic = true;
	homer.hasDinosor = false;
	homer.hasInternet = true;
	homer.hasDinosor = false;
	homer.numberOfChilderen = 3;
	printf("sizeof int: %ld bits\n", sizeof(int) * 8);
	printf("sizeof homer: %ld bits\n", sizeof(homer) * 8);

	if (homer.likeMusic) printf("Homer likes music\n");
	if (homer.hasHair) printf("Homer has hair\n");
	if (homer.hasInternet) printf("Homer has internet\n");
	if (homer.hasDinosor) printf("Homer has dinosor\n");
	printf("Homer has %d children\n", homer.numberOfChilderen);
	return 0;
}