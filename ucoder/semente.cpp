#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

struct node {
    int position;
    int dia;

    node(int pos, int d) {
        this->position = pos;
        this->dia = d;
    }
};

int main() {

    int size;
    int diasInicio;
    int aux;
    int maxDia;
    std::vector<int> nums{3, 4, 2, 8, 15, 267};
 
    auto print = [](const int& n) { std::cout << " " << n; };
 
    std::cout << "before:";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
 

    queue<node> fila;
    map<int, bool> memo;

    cin >> size >> diasInicio;
    
    for(int i = 0; i < diasInicio; i++) {
        cin >> aux;
        fila.push(node(aux, 0));
        memo[aux] = true;
    }

    maxDia = -1;
    while(!fila.empty()) {
        node atual = fila.front();
        fila.pop();

        int esq = atual.position-1;
        int dir = atual.position+1;
        int dia = atual.dia;
        maxDia = max(dia, maxDia);
        
        if(esq > 0 && memo[esq] != true) {
            fila.push(node(esq, dia+1));
            memo[esq] = true;
        }

        if(dir <= size && memo[dir] != true) {
            fila.push(node(dir, dia+1));
            memo[dir] = true;
        }    
    }

    cout << maxDia << endl;

    return 0;
}