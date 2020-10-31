#include <iostream>

using namespace std;

int f(int a, int n){
    if(n == 0) return 1;
    return f(a, n - 1) * a;
}

int f2(int a, int n){
    int res = 1;
    for(int i = 1; i <= n; ++i){
        res = res * a;
    }
}


int main(){

    int a, n;

    cin >> a >> n;

    cout << f(a, n) << endl;
    cout << f2(a, n) << endl;

    return 0;
}