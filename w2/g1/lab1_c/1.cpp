#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int d1 = n % 2;
    n = n / 2;
    int d2 = n % 2;
    n = n / 2;
    int d3 = n % 2;
    n = n / 2;
    int d4 = n % 2;

    cout << d4 << d3 << d2 << d1 << endl;

    return 0;
}