#include <iostream>

using namespace std;

int main() {

    double a, b;
    double diff;

    cin >> a >> b;

    diff = b - a;
    printf("%.2lf%%\n", (diff / a) * 100);


    return 0;
}