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

	//BITSET STL - takes 1 bit storage (only stores 1 or 0)

	//DECLARING
	bitset<5> bt;
	cin >> bt; //Ex: 10101
	// cout << bt;

	//all() return true if all bits are set, flase otherwise
	if (bt.all()) cout << "ALL BITS ARE SET\n";
	else cout << "ALL BITS ARE NOT SET\n";

	//any() returns true if any of the bit is set, false otherwise
	if (bt.any()) cout << "ATLEAST 1 BIT IS SET\n";
	else cout << "ALL BITS ARE 0s\n";

	//count() returns the number of set bits
	cout << bt.count() << "\n";

	//flip(X) flips (0 to 1 or 1 to 0) the bit at position X
	//flip() reverses all the bits
	cout << bt << '\n';
	bt.flip(2);
	cout << bt << "\n";

	//none() returns true of all are 0s, flase otherwise
	if (bt.none()) cout << "ALL BITS ARE 0s\n";
	else cout << "ATLEAST 1 BIT IS SET\n"; 

	//set() sets all the bits of number.
	// cout << bt << "\n";
	// bt.set();
	// cout << bt << "\n";

	//set(X) set the bit at position at X
	// cout << bt << "\n";
	// bt.set(2);
	// cout << bt << "\n";

	//set(X, 0) unset the bit at position X
	cout << bt << "\n";
	bt.set(0, 0);
	cout << bt << "\n";

	//reset() is just opposite to set() All functions are same

	//size() returns the bitset size
	cout << bt.size() << "\n";

	//test(X) checks if bit is set at indexd X or not.
	if (bt.test(4)) cout << "BIT IS SET\n";
	else cout << "BIT IS NOT SET\n";

	return 0;
}
