#include <iostream>

using namespace std;

bool nota[101];

int main() {

	int n, m, t, ans;
	bool ret;
	int notas[] = {2, 5, 10, 20, 50, 100};

	nota[2] = nota[5] = nota[10] = nota[20] = nota[50] = nota[100] = true;
	
	while(1) {
		cin >> n >> m;
		if(n == 0 && m == 0)
			break;
		t = m - n;
		ret = false;
		for(int i = 0; i < 6; i++) {
			ans = (t - notas[i]);
			if(ans > 0 && ans <= 100) {
				if(notas[ans]) {
					ret = true;
					break;
				}
			}
		}
		if(ret) cout << "possible" << endl;
		else cout << "impossible" << endl;
	}
	return 0;
}
