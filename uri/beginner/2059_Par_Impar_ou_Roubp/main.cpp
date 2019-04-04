#include <iostream>

#define result(j1, j2) (j1 + j2) % 2

using namespace std;

int main() {
	int p, j1,j2, r, a;
	int winner = -1;

	cin >> p >> j1 >> j2 >> r >> a;
	if( (p == 0 && result(j1, j2) != 0) || (p == 1 && result(j1, j2) == 0))
		winner = 1;
	else
		winner = 2;

	if(r == 1 && a == 1)
		winner = 2;
	if((r == 1 && a == 0) || (r == 0 && a == 1))
		winner = 1;

	cout << "Jogador " << winner << " ganha!" << endl;
	return 0;
}
