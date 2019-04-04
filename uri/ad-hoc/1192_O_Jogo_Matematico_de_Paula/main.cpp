#include <iostream>

using namespace std;

int main() {
	char s[3];
	int n;
	int ct;
	
	scanf("%d", &n);	
	while(n > 0) {
		scanf("%s", s);
		ct = 0;
		if(s[0] == s[2]) {
			ct = (s[0] - '0') * (s[2] - '0');			
		} else if(isupper(s[1])) {
			ct = -(s[0] - '0') + (s[2] - '0');	
		} else if(islower(s[1])) {
			ct = (s[0] - '0') + (s[2] - '0');	
		}
		printf("%d\n", ct);
		n--;
	}
	return 0;
}
