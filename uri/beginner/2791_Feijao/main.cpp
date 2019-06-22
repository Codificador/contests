#include <iostream>

using namespace std;


int main() {

	int pos = 1;
	int inp;
	for(int i = 0; i < 4; i++) {
		cin >> inp;
		if(inp == 1)
			pos = pos + i;
	}

	cout << pos << endl;

	return 0;
}
