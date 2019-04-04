#include <iostream>
#include <vector>

using namespace std;

int main() {

	const char READ = 'R';
	const char WRITE = 'W';
	string hist;
	int ac, p, acp;
	size_t i;

	while(cin >> hist >> p) {
		acp = i = ac = 0;
		while(i < hist.size()) {
			acp = 0;
			while(hist[i] == READ && i < hist.size() && acp < p) {
				i++;
				acp++;
			}
			if(acp > 0)
				ac++;
			while(hist[i] == WRITE && i < hist.size()) {
				i++;
				ac++;
			}	
		}
		cout << ac << endl;
	}
	return 0;
}
