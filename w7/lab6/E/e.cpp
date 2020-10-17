#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    double d = sqrt(a * a + b * b);

    printf("%.4f", d);

    return 0;
}