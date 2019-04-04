#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {

	short cn1, cn2, temp, ans;
	stack<short> n1, n2;
	stack<short> result;
	n1.push(1);
	n1.push(0);
	n1.push(0);

	n2.push(1);
	
	cn1 = cn2 = ans = 0;
	while(!n1.empty()) {
		cn1 = n1.top();
		n1.pop();
	
		if(!n2.empty()) {
			cn2 = n2.top();
			n2.pop();
		} else {
			cn2 = 0;
		}

		ans = cn1 - cn2;
		if(ans < 0) {
			if(!n1.empty()) {
				temp = n1.top(); 
				n1.pop();
				temp--;
				n1.push(temp);
				ans = ans + 10;
			}
		}

		result.push(ans);
	}

	while(result.top() == 0)
		result.pop();
	while(!result.empty()) {
		cout << result.top();
		result.pop();
	}
	cout << endl;

    return 0;
}
