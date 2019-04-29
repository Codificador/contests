#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string aux;
    while(1) {    
        vector<string> v;
        cin >> n;
        if(cin.eof())
            break;
        while(n > 0) {
            cin >> aux;
            v.push_back(aux);
            n--;
        }
        sort(v.begin(), v.end());
        for(auto it = v.begin(); it != v.end(); it++)
            cout << *it << endl;
    }

    return 0;
}