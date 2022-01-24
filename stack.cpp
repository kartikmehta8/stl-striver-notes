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

	//STACK - LAST IN FIRST OUT

	//DECLARING
	stack<int> st;

	//Pushing the elements
	st.push(4);
	st.push(3);
	st.push(2);
	st.push(1);
	st.push(0);
	//emplace() has same functionality but it is faster

	//Printing the topmost element
	// cout << st.top() << "\n";

	// //Popping the elements
	// st.pop();

	// cout << st.top() << "\n"; //Returns 1

	// //Printing the size of the stack
	// cout << st.size() << "\n";

	//empty() returns true if stack is empty, false otherwise
	bool flag = st.empty();

	//Clearing the stack
	while (!st.empty()) {
		cout << st.top() << "\n";
		st.pop();
	}

	// cout << st.top() << "\n"; //If stack is empty, it returns error

	return 0;
}
