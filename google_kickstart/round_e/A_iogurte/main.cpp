#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

    int quantidade, quantidadeDia, dia, casoTeste, consumo, iog, i, ct;
    priority_queue<int, vector<int>, greater<int> > caixa;
    
    ct = 0;
    cin >> casoTeste;
    while(ct < casoTeste) {
        cin >> quantidade;
        cin >> quantidadeDia;
        for(i = 0; i < quantidade; i++) {
            cin >> iog;
            caixa.push(iog);
        }

        dia = 0;
        consumo = 0;
        while(!caixa.empty()) {
            i = 0;
            while(i < quantidadeDia) {
                if(caixa.empty())
                    break;
                if(caixa.top() - dia <= 0) {
                    caixa.pop();
                    continue;
                }
                //cout << caixa.top() - dia << endl;
                caixa.pop();
                consumo++;
                i++;
            }
            //cout << endl;
            dia++;
        }
            
        cout << "Case #" << ct + 1 << ": " << consumo << endl;
        ct++;
    }
    return 0;
}
