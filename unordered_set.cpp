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

	//UNORDERED SET - does not follow any order of insertion (stores unique)

	//BEST THING ABOUT UNORDERED SET IS THAT IT HAS AN AVERAGE TIME COMPLEXITY
	//OF O(1)! BUT WORST THING IS THAT IT IS LINEAR IN NATURE, O(set size).

	//DECLARING THE ONORDERED SET
	unordered_set<int> st;

	//insert(X) inserts the element X into the unordered set
	st.insert(1);
	st.insert(2);
	st.insert(3);

	//OPERATIONS COMMON WIT SET STL
	//1. insert()
	//2. find()
	//3. emplace()
	//4. erase() and all other.

	//Printing the unordered set.
	for (auto it: st) {
		cout << it << " ";
	}

	return 0;
}
