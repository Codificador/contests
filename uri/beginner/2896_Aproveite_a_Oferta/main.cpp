#include <iostream>

using namespace std;

int main() {
	unsigned short int n, k, t;

	scanf("%hu", &t);	
	while(t > 0) { 
		scanf("%hu %hu", &n, &k);
		if(n < k)
			cout << n << endl;
		else
			cout << ((n / k) + (n % k)) << endl;
		t--;	
	}

	return 0;
}
