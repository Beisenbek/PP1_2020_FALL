#include <iostream>

using namespace std;

int f(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    return f(n - 1) + f(n - 2);
}

int f2(int n){
    if(n == 1) return 0;
    int a = 0;
    int b = 1;
    for(int i  = 3; i <=n; ++i){
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int memo[51];

int f3(int n){
    if(memo[n] != -1) return memo[n];
    memo[n] = f3(n-1) + f3(n-2);
    return memo[n];
}

int main(){

    memo[1] = 0;
    memo[2] = 1;

    for(int i = 3; i <= 50; ++i){
        memo[i] = -1;
    }

    int n;
    cin >> n;

    cout << f2(n) << endl;
    cout << f3(n) << endl;

    return 0;
}