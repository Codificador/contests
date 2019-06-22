#include <iostream>

using namespace std;

int main() {

	int l, c;

	cin >> l >> c;

	if(l % 2 != 0) { 
		if(c % 2 != 0)
			cout << "1";
		else
			cout << "0";
	}
	else {
		if(c % 2 != 0)
			cout << "0";
		else
			cout << "1";
	}

	cout << endl;

	return 0;
}
