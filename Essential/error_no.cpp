#include <iostream>
using namespace std;

int main()
{
	printf("error no is %d\n", errno);
	printf("Erasing file foo.bar\n");
	remove("foo.bar");
	printf("error no is %d\n", errno);
	//perror("Can not erase file"); 
	const char* errstr = strerror(errno);
	printf("Tried to erase a file and this happened: %s\n", errstr);

	return 0;
}