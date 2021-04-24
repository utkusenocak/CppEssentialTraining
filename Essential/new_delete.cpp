#include <iostream>
using namespace std;
constexpr size_t count_t = 1024;
int main()
{
	printf("allocate space for %lu long int at *ip with new\n", count_t);

	//allocate array
	long int* ip;

	try
	{
		ip = new long int[count_t];
	}
	catch (const std::bad_alloc& ba)
	{
		fprintf(stderr, "Can not allocate memory (%s)\n", ba.what());
		return 1;
	}

	//initialize array
	for (long int i = 0; i < count_t; ++i) {
		ip[i] = i;
	}

	//print array
	for (long int i = 0; i < count_t; ++i) {
		printf("%ld ", ip[i]);
	}
	printf("\n");

	//deallocate array
	delete[] ip;
	printf("space at *ip is deleted");
	return 0;
}