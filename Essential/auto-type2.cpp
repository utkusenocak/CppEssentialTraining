#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vi = { 1, 2, 3, 4, 5 };
	for (auto it = vi.begin(); it != vi.end(); ++it) //auto is replaced for vector<int>::iterator
	{
		printf("it is %d\n", *it);
	}
	return 0;
}