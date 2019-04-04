#include <iostream>

using namespace std;

int main() {
	
	int cv, ce, cg;
	int fv, fe, fg;
	int pc, pf;

	cin >> cv >> ce >> cg >> fv >> fe >> fg;

	pc = (cv * 3) + (ce);
	pf = (fv * 3) + (fe);

	if(pc > pf || (pc == pf && cg > fg)) {
		cout << "C" << endl; 
	} else if (pf > pc || (pc == pf && fg > cg)) {
		cout << "F" << endl; 
	} else {
		cout << "=" << endl;
	}

	return 0;
}
