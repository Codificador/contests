#include <iostream>
#include <stack>

using namespace std;

int main() {

	bool carry;
	stack<short> n1, n2, result;
	
	// A ideia para resolver este problema:
	// 		Vou resolver este problema usando uma implementacao de BigInteger
	// o motivo disto eh porque o problema pede um numero de ate 10^19, portanto
	// nao cabe em um int ou variacoes em c++.
	//
	carry = false;
 	n2.push(1);
	while(!n1.empty()) {
		short carryPlusN1 = carry + n1.top();
		if(!n2.empty()) {
			short diff = carryPlusN1 - n2.top();
			if(diff < 0) {
				carry = true;
			}
			n2.pop();
		}
		n1.pop();
	}
	
	return 0;
}
