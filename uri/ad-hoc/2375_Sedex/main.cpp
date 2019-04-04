#include <iostream>

using namespace std;

int main() {

	int b;
	int l, h, p;

	cin >> b >> l >> h >> p;
	if((l - b) < 0 || (h - b) < 0 || (p - b) < 0)
		cout << "N";
	else
		cout << "S";
	putchar('\n');


	return 0;
}
