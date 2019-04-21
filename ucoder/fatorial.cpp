#include <cstdio>

int main() {
    int fat, n;

    scanf("%d", &n);
    fat = 1;
    for (int i = 1; i <= n; i++) 
        fat = fat * i;
    printf("%d\n", fat);
    
    return 0;
}