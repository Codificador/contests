#include <iostream>
#include <map> 

using namespace std;

int main() {

    bool ret;
    string s1, s2;
    map<char, int> lettersS1, lettersS2;
    
    cin >> s1 >> s2;

    for(string::iterator it = s1.begin(); it != s1.end(); ++it)
        lettersS1[*it]++;
    for(string::iterator it = s2.begin(); it != s2.end(); ++it)
        lettersS2[*it]++;
    ret = true;
    if(lettersS1.size() == lettersS2.size()) {
        for(map<char, int>::iterator it = lettersS1.begin(); it != lettersS1.end(); ++it) {
            if(lettersS2[it->first] != it->second) {
                ret = false;
                break;        
            }
        }
    } else {
        ret = false;
    }
    
    if(ret)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}