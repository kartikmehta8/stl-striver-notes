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

	//ALGORITHMS

	int arr[5] = {3,5,1,1,2};

	//SORTING
	sort(arr, arr+5);

	// for (int i: arr) cout << i << " ";

	vector<int> vec(5, 0);
	// for (int i = 5; i >= 0; i--) vec[i-1] = i;

	// for (auto it: vec) cout << it << " ";
	// sort(vec.begin(), vec.end());
	// for (auto it: vec) cout << it << " ";

	//vec -> {1,6,2,7,4}
	//sort it so that only indexes from 1 to 3
	//final vector -> {1,2,6,7,4}
	//sort(vec.begin()+1, vec.begin()+4) // [1,4)

	//REVERSE - reverse(firstIterator, endIterator)
	reverse(arr, arr+5);
	// for (int i: arr) cout << i << " ";

	//MAXIMUM ELEMENT IN CONTAINER
	//max_element(firstIterator, endIterator)
	int max = *max_element(arr, arr+5);
	cout << max << "\n";

	//MINIMUM ELEMENT IN CONTAINER
	//min_element(firstIterator, endIterator)
	int min = *min_element(arr, arr+5);
	cout << min << "\n";

	int arr_sum[5] = {2, 4, 6, 8, 10};

	// Calculate the sum between the range i to j (inclusive) - accumulate()
	// accululate(firstIterator, lastIterator, initialSum)

	// int sum = accumulate(arr_sum, arr_sum+3, 0);
	// cout << sum << "\n";

	// Count X element in an array/vector - count()
	// count(firstIterator, endIterator, toCountVariable)

	int countOne = count(arr, arr+5, 1);
	cout << countOne << "\n";

	int arr_find[7] = {1, 2, 5, 1, 2, 4, 4};
	//To find the first occurence of element X - find()
	// find(startIterator, endIterator, element)
	// returns pointer to that index
	// if element is not there, it points to end().

	// auto it = find(arr_find, arr_find+7, 2);
	// int index = it - arr_find;
	// cout << index << "\n";

	// binary_search(firstIterator, lastIterator, elementToFind)
	// Returns true if element is present, false otherwise
	// Only works on sorted vector/array - log(N)

	int arr_bin[5] = {1, 2, 5, 7, 9};
	bool result = binary_search(arr_bin, arr_bin+5, 5);
	if (result == true) cout << "Element is present!\n";
	else cout << "element is not present!\n";

	// lower_bound() - returns an iterator pointing to first
	// element which is NOT LESS THAN X.
	// arr[] = {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};
	// X = 10, it will point to 10
	// X = 6, it will point to 7
	// X = 13, it will point to end().
	// works in log(N) time.

	// int arr_lo[10] = {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};
	// auto it = lower_bound(arr_lo, arr_lo+10, 6);
	// int index = it - arr_lo;
	// cout << index << "\n";

	// upper_bound() - returns an iterator pointing to
	// element which is JUST GREATER THAN X.
	// arr[] = {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};
	// X = 7, it will point to 8
	// X = 6, it will point to 7
	// X = 12, it will point to end().
	// works in log(N) time.

	int arr_up[10] = {1, 5, 7, 7, 8, 10, 10, 11, 11, 12};
	auto it = upper_bound(arr_up, arr_up+10, 7);
	int index = it - arr_up;
	cout << index << "\n";

	// Next permutation
	// string str = "abc";
	// all permutations sorted order:
	
	// abc
	// acb
	// bac
	// bca
	// cab
	// cba

	//can be strings, array, vector! Lexicographically sorted.

	string str = "abc";
	do {
		cout << str << "\n";
		next_permutation(str.begin(), str.end());
	} while (str != "abc");

	// Previous permutation - simply returns previous permutation!
	//can be strings, array, vector! Lexicographically sorted.

	return 0;
}

