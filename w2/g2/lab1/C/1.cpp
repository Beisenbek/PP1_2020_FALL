#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    int r1 = n % 2;
    n = n / 2;
    int r2 = n % 2;
    n = n / 2;
    int r3 = n % 2;
    n = n / 2;
    int r4 = n % 2;

    cout << r4 << r3 << r2 << r1 << endl;

    cout << 8 * r4 + 4 * r3 + 2 * r2 + 1 * r1 << endl;

    return 0;
}