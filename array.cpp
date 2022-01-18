#include <bits/stdc++.h>

//Ctrl+Alt+F    To format the code
//Ctrl+B        To run the code
//Ctrl+/        To comment the lines completly
//Ctrl+Shift+/  To comment the required/selected lines only

using namespace std;

array<int, 5> arr_global; // -> {0, 0, 0, 0, 0}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//ARRAY STL

	//If array STL is declared globally, then its values will be
	//initialized with 0s. In int main() {} its values will be garbage values.

	array<int, 5> arr; // -> {?, ?, ?, ?, ?}

	array<int, 5> other_arr = {1, 2, 3}; // -> {1, 2, 3, 0, 0} All other
	// becomes zero 

	//Always declare array STL like array<int, 5> arr = {0}; This will
	//initialize all the elements as 0s even if you are declaring it in int
	//main()

	//fill(X) fills the entire array with value X
	int N = 2;
	arr.fill(N); // {2, 2, 2, 2, 2}

	//at(index) returns the value at index of the array
	// for (int i = 0; i < 5; i++) {
	// 	cout << arr.at(i) << " ";
	// }

	//Iterators usage
	//begin(), end(), rbegin(), rend()

	//Printing using iterator
	// for (auto it = arr.begin(); it != arr.end(); it++) {
	// 	cout << *it << " ";
	// }

	//Printing arr in reverse order
	// for (auto it = arr.rbegin(); it != arr.rend(); it++) {
	// 	cout << *it << " ";
	// }

	//Other method using iterator to print the given array - FOR EACH LOOP
	for (auto it: arr) {
		cout << it << " ";
	}

	//Printing size of the array
	cout << "\n" << arr.size() << "\n";

	//Printing the first and last element of array
	cout << arr.front() << " " << arr.back() << "\n";

	return 0;
}
