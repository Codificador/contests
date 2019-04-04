#include <iostream>
#include <vector>

using namespace std;

int main() {

	int vi, n;
	int t;

	cin >> vi >> n;
	
	for(int i = 1; i <= n; i++) {
		cin >> t;
		vi += t;
		if(vi >= 100) 
			vi = 100;
		if(vi <= 0) 
			vi = 0;
	}

	cout << vi << endl;
	
	return 0;
}
