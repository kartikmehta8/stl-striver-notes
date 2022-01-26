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

	//PRIORITY_QUEUE - Stores elements in sorted order
	//All operations occur in log(N) time

	//DECLARING
	priority_queue<int> pq;

	//PUSHING THE ELEMENT
	pq.push(1);
	pq.push(9);
	pq.push(8);
	pq.push(2);
	pq.push(7);
	pq.push(3); // pq -> {9,8,7,3,2,1}

	// cout << pq.top() << "\n"; // Return 9
	// pq.pop();
	// cout << pq.top() << "\n"; // return 8

	priority_queue<pair<int, int>> pq_pair;
	pq_pair.push(make_pair(1,5));
	pq_pair.push(make_pair(1,7));
	pq_pair.push(make_pair(1,6)); // pq_pair -> {(1,7),(1,6),(1,5)}

	// cout << pq_pair.top().first << "\n";

	//CREATING THE MINIMUM PRIORITY QUEUE
	priority_queue<int, vector<int>, greater<int>> min_pq;

	min_pq.push(1);
	min_pq.push(9);
	min_pq.push(8);
	min_pq.push(2);
	min_pq.push(7);
	min_pq.push(3); // min_pq -> {1,2,3,7,8,9}

	cout << min_pq.top() << "\n";

	 

	return 0;
}
