#include <iostream>
#include <algorithm>
using namespace std;


void readArray(int * a, int n){
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
}

void printArray(int * a, int n){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " "; 
    }
    cout << endl;
}

void solve(int * a, int * b, int * d, int n){
    for(int i = 0; i < n; ++i){
        d[i] = abs(a[i] - b[i]);
    }
}

int main(){


    int n;
    cin >> n;

    int a[n], b[n], d[n];

    readArray(a, n);
    readArray(b, n);

    solve(a, b, d, n);

    printArray(d, n);

    return 0;
}

