#include <cstdio>
int main() {
	int n, k, t;

	scanf("%d", &t);	
	while(t > 0) { 
		scanf("%d %d", &n, &k);
		if(n < k)
			printf("%d\n", n);
		else
			printf("%d\n", ((n / k) + (n % k)) );
		t--;	
	}

	return 0;
}
