#include <iostream>

#define LOOP(s) for(auto c = s.begin(); c != s.end(); c++)

using namespace std;

int main() {
	char d;
	bool allZero;

	string n, res;
	while(1) {	
		allZero = true;
		cin >> d >> n;
		if(d == '0')
			break;

		LOOP(n){
			if(*c == d)
				continue; 
			res += *c;
		}

		LOOP(res){
			if(*c != '0') {
				allZero = false;
				break;
			}
		}
		
		int i = 0;
		while(res[i] == '0')
			i++;

		if(allZero) {
			putchar('0');
		} else {
			while(i < res.size()) {
				putchar(res[i]);
				i++;
			}
		}
		putchar('\n');

		res = "";
	}

	return 0;	
}
