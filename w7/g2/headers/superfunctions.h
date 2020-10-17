#include <iostream>
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
}

double power (double a, int n){
    double res = 1;

    for(int i = 0; i < n; ++i){
        res = res * a;
    }

    return res;
}
