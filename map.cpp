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

	//MAP STL - stores key-value pair
	//sort the pair in ascending order
	//Time complexity - log(N)

	//DECLARING THE MAP
	map<string, int> mpp;

	//Storing/inserting the values
	mpp["kartik"] = 17;
	mpp["kunal"] = 27;
	mpp["mummy"] = 9;
	mpp["santro"] = 1;
	mpp["kartik"] = 19; //It override the value and stores 19

	//Other method to insert
	mpp.emplace("mehta", 3); //Slightly quicker

	//Deleting the key-value
	mpp.erase("mehta"); //Given key name
	mpp.erase(mpp.begin()); //Deleting first pair
	// mpp.clear(); //Deleting the entire map

	//find() gives first occurence of <key>
	auto it = mpp.find("kartik");

	//MAP ONLY STORES UNIQUE KEYS

	//Check weather map is empty or not
	if (mpp.empty() == true) cout << "MAP IS EMPTY\n";
	else cout << "MAP IS NOT EMPTY\n";

	mpp.count("kartik"); //Returns 1 as it contains unique

	//Printing the map
	// for (auto it: mpp) {
	// 	cout << it.first << " " << it.second << " \n";
	// }

	//Printing #Other way
	for (auto it = mpp.begin(); it != mpp.end(); it++) {
		cout << it->first << " " << it->second << "\n";
	}

	//UNORDERED MAP - ALL FUNCTIONS ARE SAME AS MAP
	//ALL OPERATIONS OF UNORDERED MAP TAKES O(1) time & O(N)
	//in worst case.
	
	//MULTIMAP - ALL FUNCTIONS ARE SAME AS MAP
	//IT CAN STORE DUPLICATE KEYS WITH DIFFERENT VALUES

	return 0;
}
