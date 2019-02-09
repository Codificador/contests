#include <iostream>

using namespace std;

int main() {
	int n, k, t;

	scanf("%d", &t);	
	while(t > 0) { 
		scanf("%d %d", &n, &k);
		if(n < k)
			cout << n << endl;
		else
			cout << ((n / k) + (n % k)) << endl;
		t--;	
	}

	return 0;
}
