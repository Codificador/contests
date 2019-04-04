#include <cstdio>
#include <cstring>

int main() {

	const char READ = 'R';
	const char WRITE = 'W';
	char hist[50];
	int ac, p, acp;
	size_t i;

	while(scanf("%s %d", hist, &p) != EOF) {
		acp = i = ac = 0;
		while(i < strlen(hist)) {
			acp = 0;
			while(hist[i] == READ && i < strlen(hist) && acp < p) {
				i++;
				acp++;
			}
			if(acp > 0)
				ac++;
			while(hist[i] == WRITE && i < strlen(hist)) {
				i++;
				ac++;
			}	
		}
		
		printf("%d\n", ac);
	}
	return 0;
}
