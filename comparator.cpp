#include <bits/stdc++.h>

//Ctrl+Alt+F    To format the code
//Ctrl+B        To run the code
//Ctrl+/        To comment the lines completly
//Ctrl+Shift+/  To comment the required/selected lines only

using namespace std;

bool cmp(int element1, int element2) {
	if (element1 > element2) return true;
	return false;
}

bool comp(pair<int, int> element1, pair<int, int> element2) {
	if (element1.first < element2.first) return true;
	if (element1.first == element2.first) {
		if (element1.second > element2.second) return true;
	}
	return false;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// COMPARATORS

	int arr[5] = {2, 4, 1, 5, 3};
	cout << "Original Array :\n";
	for (auto it: arr) cout << it << " ";
	cout << "\n";

	sort(arr, arr+5);
	cout << "Original Array after Ascending Sort :\n";
	for (auto it: arr) cout << it << " ";
	cout << "\n";

	int arr_desc[5] = {2, 4, 1, 5, 3};
	cout << "Array for reverse sort :\n";
	for (auto it: arr_desc) cout << it << " ";
	cout << "\n";

	sort(arr_desc, arr_desc+5, cmp);
	cout << "Array after Descending Sort :\n";
	for (auto it: arr_desc) cout << it << " ";
	cout << "\n";

	pair<int, int> arr_pair[3] = {{1, 4}, {5, 2}, {5, 9}};
	// Sort this in such a way that the element who have first element
	// in pair smaller appears first, and if first is equal, then sort
	// according to second and keep the larger second first

	cout << "Pairs are : \n";
	for (pair<int, int> it: arr_pair) {
		cout << '{' << it.first << ", " << it.second << '}' << "\n"; 
	}

	sort(arr_pair, arr_pair+3, comp);
	cout << "Pairs after sorting : \n";
	for (pair<int, int> it: arr_pair) {
		cout << '{' << it.first << ", " << it.second << '}' << "\n"; 
	}

	int arr_gr[5] = {4, 3, 5, 1, 2};
	cout << "Original Array :\n";
	for (auto it: arr_gr) cout << it << " ";
	cout << "\n";

	// greater<int> is an inbuilt comparator which works only
	// if you want to sort in descending order.
	sort(arr_gr, arr_gr+5, greater<int>());

	cout << "Original Array after Ascending Sort :\n";
	for (auto it: arr_gr) cout << it << " ";
	cout << "\n";

	return 0;
}
