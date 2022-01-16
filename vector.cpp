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

	//VECTOR - DYNAMIC ARRAY

	//Declaring the array
	vector<int> arr; // -> {}

	//Inserting the value using push_back()
	arr.push_back(1); // -> {1}
	arr.push_back(2); // -> {1, 2}

	//arr.emplace_back(1); emplace_back() works same as push_back but it is
	//faster!

	//Check the size of array - size()
	// cout << arr.size() << "\n";

	//Popping the last element using pop_back()
	// arr.pop_back(); -> {1}
	// arr.pop_back(); -> {}

	//clear() erases all the vector elements
	arr.clear();
	// cout << arr.size() << "\n"; // Returns 0

	//Initializing a vector #Other way
	vector<int> vec(4, 10); // -> {10, 10, 10, 10}

	//Printing the vector
	// for (auto it: vec) cout << it << " ";

	vector<int> vec1(4, 0);
	vector<int> vec2(4, 1);

	//Copy the entire data of vec2 into vec3
	vector<int> vec3(vec2);
	//OR vector<int> vec3(vec2.begin(), vec2.end())
	// for (auto it: vec3) cout << it << " ";

	vector<int> vec4;
	vec4.push_back(1);
	vec4.push_back(3);
	vec4.push_back(4);
	vec4.push_back(2);
	// VECTOR 4 -> {1, 3, 4, 2}

	//Creating vector 5 of first two elements of vec4
	vector<int> vec5(vec4.begin(), vec4.begin()+2);
	// for (auto it: vec5) cout << it << " ";

	//VECTOR ALSO HAS SAME FUNCTIONS AS ARRAYS:
	//1. begin()
	//2. end()
	//3. rbegin()
	//4. rend()

	//DEFINING 2D VECTOR
	vector<vector<int>> vec_2d;

	//Initializing 3 vectors 
	vector<int> vec6;
	vec6.push_back(1);
	vec6.push_back(2);
	vec6.push_back(3);

	vector<int> vec7;
	vec7.push_back(4);
	vec7.push_back(5);
	vec7.push_back(6);

	vector<int> vec8;
	vec8.push_back(7);
	vec8.push_back(8);
	vec8.push_back(9);
	vec8.push_back(10);

	//Pushing the vector in vec_2d
	vec_2d.push_back(vec6);
	vec_2d.push_back(vec7);
	vec_2d.push_back(vec8);

	//vec_2d looks like this:
	// {
	//   {1, 2, 3}
	//   {4, 5, 6}
	//	 {7, 8, 9, 10}
	// }

	//PRINTING A VECTOR
	//vectr will be a vector itself
	// for (auto vectr: vec_2d) {
	// 	for (auto it: vectr) {
	// 		cout << it << " ";
	// 	}
	// 	cout << "\n";
	// }

	//PRINTING IN TRADITIONAL WAY
	// for (int i = 0; i < vec_2d.size(); i++) {
	// 	for (int j = 0; j < vec_2d[i].size(); j++) {
	// 		cout << vec_2d[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }

	//Accessing elements in 2D vector
	// cout << vec_2d[2][2] << "\n"; // 2nd Vector's 2nd element (just like
	//arrays)

	//Initializing 2D vector of 10 by 20 #Other way
	vector<vector<int>> another_vec_2d(10, vector<int> (20, 0));
	//This will create 10 by 20 vector with all values as 0s.
	another_vec_2d.push_back(vector<int> (20, 0)); //Adding vector
	// It will form 11 by 20 vector

	//Initializing a 3D vector of 10 by 20 by 30 with all values as 0s.
	vector<vector<vector<int>>> vec_3d(10, vector<vector<int>> (20, vector<int> (30, 0)));

	return 0;
}
