#include <iostream>
#include <cctype>

using namespace std;

int main() {

	int n;

	scanf("%d", &n);
	cin.ignore();
	while(n > 0) {
		string s;
		int alpha[26];
		for(int i = 0; i < 26; i++) {
			alpha[i] = 0;
		}
		getline(cin, s);
		for(int i = 0; i < s.size(); i++) {
			if(isalpha(s[i])) {
				alpha[tolower(s[i]) - 'a']++;
			}	
		}
		int ct = 0;
		for(int i = 0; i < 26; i++) {
			if(alpha[i]) 
				ct++;
		}
		if (ct < 13) 
			printf("frase mal elaborada\n");
        else if (ct < 26) 
			printf ("frase quase completa\n");
        else if (ct==26) 
			printf ("frase completa\n");
		n--;
	}

}
