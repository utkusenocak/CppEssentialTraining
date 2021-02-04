#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cout << "Vector from initializer list: " << endl;
	vector<int> vil = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "size: " << vil.size() << endl;
	cout << "front: " << vil.front() << endl;
	cout << "back: " << vil.back() << endl;

	//iterator
	cout << endl << "Iterator: " << endl;
	vector<int>::iterator itbegin = vil.begin(); // we could have use auto too
	vector<int>::iterator itend = vil.end(); // we could have use auto too
	for (auto it = itbegin; it < itend; ++it) {
		cout << *it << ' ';
	}
	cout << endl;

	cout << endl << "Index: " << endl;
	cout << "element at 5: " << vil[5] << endl;
	cout << "element at 5: " << vil.at(5) << endl;

	cout << endl << "Range-based for loop:" << endl;
	for (int& i : vil) {
		cout << i << ' ';
	}
	cout << endl;

	cout << endl << "Insert 42 at begin + 5: " << endl;
	vil.insert(vil.begin() + 5, 42);
	cout << "size: " << vil.size() << endl;
	cout << "vil[5]: " << vil[5] << endl;

	cout << "Erase at begin + 5: " << endl;
	vil.erase(vil.begin() + 5);
	cout << "size: " << vil.size() << endl;
	cout << "vil[5]: " << vil[5] << endl;

	cout << "push_back 47: " << endl;
	vil.push_back(47);
	cout << "size: " << vil.size() << endl;
	cout << "vil.back() " << vil.back() << endl;

	cout << "Rabge-based for loop: " << endl;
	for (int& v : vil) {
		cout << v << ' ';
	}
	cout << endl;

	//from C-array
	constexpr static size_t size = 10;
	int ia[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << endl << "Vector from C-array: " << endl;
	vector<int> vi2(ia, ia + size);
	for (int& i : vi2) {
		cout << i << ' ';
	}
	cout << endl << endl;

	//vector of strings
	cout << "Vector of strings: " << endl;
	vector<string> vs = { "one", "two", "three", "four", "five" };
	for (string& v : vs) {
		cout << v << endl;
	}

	return 0;

}