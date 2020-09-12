#include <iostream>

using namespace std;

int main(){

    int n, k;

    cin >> n >> k;

    cout << n + k / 100 + k % 10 << endl;

    return 0;
}