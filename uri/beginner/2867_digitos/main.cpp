#include <cstdio>
#include <cmath>

using namespace std;

int main() {

	int t;
	double x, y;

	scanf("%d", &t);
	while(t > 0) {
		scanf("%lf %lf", &x, &y);
		printf("%.0lf\n",  floor(((log10(x) * y) + 1)));
		t--;
	}
	
	return 0;
}
