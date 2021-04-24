#include <iostream>
using namespace std;

int main()
{
	static const char* fn1 = "file1";
	static const char* fn2 = "file2";
	/*FILE* fh = fopen(fn1, "w");
	fclose(fh);
	*/
	//rename(fn1, fn2); //rename the file 
	remove(fn2); //remove file
	printf("done\n");
	return 0;
}