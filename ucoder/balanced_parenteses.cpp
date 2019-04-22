#include <iostream>
#include <stack>

using namespace std;

int main() {

    string line;
    stack<char> stk;
    bool ret = true;

    cin >> line;

    for(string::iterator it = line.begin(); it != line.end(); ++it) {
        if(*it == '(') {
            stk.push(*it);
        } else if(*it == ')') {
            if(stk.empty()) {
                ret = false;
                break;
            }
            stk.pop();
        }
    }

    if(ret && stk.empty())
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}