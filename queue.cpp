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

	//QUEUE - First In, First Out

	//DECLARING QUEUE
	queue<int> q;

	//Pushing the elements
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	// //Printing the front element
	// cout << q.front() << "\n";

	// //Popping the first element
	// q.pop();

	// cout << q.front() << "\n";

	// //Checking the size of the queue
	// cout << q.size() << "\n";

	//empty() returns true when queue is empty, false otherwise
	bool flag = q.empty();

	//Clearing the queue
	while (!q.empty()) {
		cout << q.front() << "\n";
		q.pop();
	}

	return 0;
}
