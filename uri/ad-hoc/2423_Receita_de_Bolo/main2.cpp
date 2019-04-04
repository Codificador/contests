#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;
    
	scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", min(a/2, min(b/3, c/5)));
    
    return 0;
}
