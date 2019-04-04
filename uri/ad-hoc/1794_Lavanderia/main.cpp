#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n;
	int la, lb;
	int sa, sb;

	cin >> n;
	cin >> la >> lb >> sa >> sb;

	if((la - n) <= 0 && (lb - n) >= 0) {
		if((sa - n) <= 0 && (sb - n) >= 0) {
			cout << "possivel" << endl;		
		} else {
			cout << "impossivel" << endl;
		}		
	} else {
		cout << "impossivel" << endl;	
	}

	return 0;
}
