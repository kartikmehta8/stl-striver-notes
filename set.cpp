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

	//SET STL - stores unique elements in ascending order

	//DECLARING THE SET
	set<int> st;

	//Given N elements, print the number of unique elements
	int arr[10] = {1,1,1,2,2,4,5,6,6,5};

	for (int i = 0; i < 10; i++) st.insert(arr[i]); //insert() takes log
	// (N) time to store/add the element
	//st -> {1,2,4,5,6}

	//ONLY PRINT UNIQUE ELEMENTS
	// for (auto it = st.begin(); it != st.end(); it++) cout << *it << " ";

	//erase() will erase the element of the set.
	st.erase(st.begin());
	//st -> {2,4,5,6}
	
	//st.erase(startingIterator, endingIterator);
	// st.erase(st.begin(), st.end());
	// st -> {} Deletes the entire set
	//Time taken = length that you delete

	//st.erase(key) key = element that you want to delete
	st.erase(4);
	//st -> {2,5,6} 

	//Copying the set to another set (like vector)
	set<int> set2(st.begin(), st.end());

	// for (auto it = set2.begin(); it != set2.end(); it++) cout << *it << " ";
	// set2 -> {2,5,6}

	//find(X) returns the iterator which is pointer to the X (time - log(N))
	auto it = st.find(5);

	//If the element is not present the the set, then it will be it = st.end
	//() and we knwo there nothing at the end!

	st.emplace(10); // Equivalent to st.insert(10) but faster
	//st -> {2,5,6,10}

	//size() returns the size of the set
	// cout << st.size() << "\n";

	// for (auto it = st.begin(); it != st.end(); it++) cout << *it << " ";

	return 0;
}
