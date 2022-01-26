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

	//PAIR STL

	//DECLARING PAIR
	pair<int, int> pr = {1,2};
	pair<pair<int, int>, int> pr2 = {{1,2},3};

	//ACCESSING ELEMENTS
	cout << pr2.first.first << "\n" << pr2.second << "\n";

	return 0;
}
