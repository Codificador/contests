#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int T, N;

	int ctFreq, totalClass;
	double totalFreq;

	string strNames;
	string strFreqs;

	getline(cin, strNames);
	getline(cin, strFreqs);

	istringstream issnames(strNames);
	istringstream issfreqs(strFreqs);

	vector<string> names((istream_iterator<string>(issnames)),
							istream_iterator<string>()
						);
	vector<string> freqs((istream_iterator<string>(issfreqs)),
							istream_iterator<string>()
						);

	auto itNames = names.begin();
	for(auto itFreqs = freqs.begin(); itFreqs != freqs.end(); itFreqs++, itNames++) {
		string freq = *itFreqs;
		ctFreq = totalClass = 0;
		for(auto it = freq.begin(); it != freq.end(); it++) {
			if(*it == 'P') {
				ctFreq++;
			}
			if(*it == 'M') {
				continue;
			}
			totalClass++;
		}
		totalFreq = (double)(ctFreq) / (double)(totalClass);
		if(totalFreq >= 0.75)
			cout << *itNames;
	}
	cout << endl;
	return 0;
}	
