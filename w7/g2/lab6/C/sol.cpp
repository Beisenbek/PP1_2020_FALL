#include <iostream>

using namespace std;

void readArray(int * a, int n){
    int x;

    for(int i = 1; i <= 100; ++i){
        a[i] = 0;
    }

    for(int i = 0; i < n; ++i){
        cin >> x;
        a[x]++;
    }
}

int solve(int * a, int * b){
    int res = 0;

    for(int i = 1; i <= 100; ++i){
        res += min(a[i], b[i]);
    }

    return res;
}

int main(){

    int n;
    cin >> n;
    
    int a[101], b[101];

    readArray(a, n);
    readArray(b, n);

    cout << solve(a, b) << endl;

    return 0;
}
