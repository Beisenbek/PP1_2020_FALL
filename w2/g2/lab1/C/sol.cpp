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

    cout << 8 * r1 + 4 * r2 + 2 * r3 + r4 << endl;

    return 0;
}