#include <bits/stdc++.h>

//Ctrl+Alt+F    To format the code
//Ctrl+B        To run the code
//Ctrl+/        To comment the lines completly
//Ctrl+Shift+/  To comment the required/selected lines only

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//MULTISET - stores all the elements (duplicate also) in sorted order

	//DECLARING THE MULTISET
	multiset<int> ms;

	//Inserting the elements
	ms.insert(1);
	ms.insert(1);
	ms.insert(2);
	ms.insert(3);
	ms.insert(3);

	//Printing the multiset
	// for (auto it: ms) {
	// 	cout << it << " ";
	// }
	//ms -> {1,1,2,3,3}

	//ALL THE FUNCTIONS CAN BE USED WITH SET OR UNORDERED SET CAN BE USED WITH
	//MULTISET

	ms.erase(3);
	//Removes all the instances of element will be deleted

	for (auto it: ms) {
		cout << it << " ";
	}
	//ms -> {1,1,2}

	//Returns iterator to the first occurence of the element passed
	auto it = ms.find(1);

	//Clears/Deletes/Empty the multiset
	ms.clear();

	//Same as set or unordered_set
	// ms.erase(ms.find(2));
	ms.erase(ms.begin());

	return 0;
}
