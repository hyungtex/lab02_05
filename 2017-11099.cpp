#include <vector>
#include <iostream>
#include <algorithm>
//18-04-09 programming methodology, LAB2.
//"auto" keyword
//"range based for loop"
// make an ordering fuction.
using namespace std;
//lecture notes.
//automatic type deduction/delcared types.
//Difference between static and dynamic languages is that the compiler deduces the type of a variable as
//the program is compiled. Some wanted it in C++, and created "auto" type. 
//std::vector<int>::iterator it = vec.begin(); it<vec.end(); it ++ can be replaced with
//auto it= vec.begin(); it<vec.end(); ...

//null pointer.

//range based for loop.

void main() {
	vector <int> input;
	int num;
	while (cin>>num) {
		input.push_back(num);
	}
	cout << endl << endl;
	sort(input.begin(), input.end());
	reverse(input.begin(), input.end());
	cout << "ordered array" << endl;
	for (int i : input) {
		cout << i << " ";
	}

}