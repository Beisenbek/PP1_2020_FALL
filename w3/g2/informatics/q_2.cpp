#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int n, m;
    cin >> n >> m;

    cout << m / n + int(bool(m % n)) << endl;

    cout << m/n + 1 % (m % n + 1) << endl;

    return 0;
}