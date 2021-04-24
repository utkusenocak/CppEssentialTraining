#include <iostream>
using namespace std;

const char* prompt();
int jump(const char*);

void fa() { printf("this is fa()\n"); };
void fb() { printf("this is fb()\n"); };
void fc() { printf("this is fc()\n"); };
void fd() { printf("this is fd()\n"); };
void fe() { printf("this is fe()\n"); };
void (*funcs[])() = { fa, fb, fc, fd, fe };
int main()
{
	while (jump(prompt()));
	printf("\nDone \n");
	return 0;
}

const char* prompt()
{
	printf("Choose an option:\n");
	printf("1. Function fa()\n");
	printf("2. Function fb()\n");
	printf("3. Function fc()\n");
	printf("4. Function fd()\n");
	printf("5. Function fe()\n");
	printf("Q. Quit\n");
	printf(">>");
	fflush(stdout);
	const int buffer_size = 16;
	static char response[buffer_size];
	cin >> response;

	return response;
}

int jump(const char* rs)
{
	char code = rs[0];
	if (code == 'q' || code == 'Q') return 0;
	//lengt of the funcs array
	int func_length = sizeof(funcs) / sizeof(funcs[0]);

	int i = (int)code - '0'; // convert ASCII numeral to int
	if (i < 1 || i > func_length) {
		printf("invalid choice\n");
		return 1;
	}
	else {
		funcs[i - 1]();
		return 1;
	}

}