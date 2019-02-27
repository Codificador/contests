#include <iostream>

#define result(j1, j2) (j1 + j2) % 2

using namespace std;

int main() {
	int p, j1,j2, r, a;
	int winner = -1;

	cin >> p >> j1 >> j2 >> r >> a;
	if(p == 0) { // j1 escolhe impar
		if( result(j1, j2) != 0 ) {
			winner = 1;
		} else {
			winner = 2;
		}
	}
	else { // j1 escolhe par
		if( result(j1, j2) == 0 ) {
			winner = 1;
		} else {
			winner = 2;
		}
	}
/*
	if(r == 1 and a == 1)
		winner = 2;
	//if(r == 0 and a == 0)
	//	winner = winner;
	if(r == 1 and a == 0)
		winner = 1;
	if(r == 0 and a == 1)
		winner = 2;
*/

	// 1 1 2 ---  
	// 1 0 1    |--> 2
	// 0 1 2 ---

	if(a == 1)
		winner = 2;
	if(r == 1 and a == 0)
		winner = 1;

	cout << "Jogador " << winner << " ganha!" << endl;
	return 0;
}
