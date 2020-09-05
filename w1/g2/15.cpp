#include <iostream>

using namespace std;

int main(){

    float a = 22;
    float b = 7;
    float p = a / b;

    cout << p << endl;

    printf("%.2f\n", p);
    printf("%.20f\n", p);

    return 0;
}