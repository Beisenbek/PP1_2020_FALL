#include <iostream>
#include <cmath>

using namespace std;

void memsetV(int * arr, int v, int n){
    for(int i = 0; i < n; ++i){
        arr[i] = v;
    }
}

void readArray(int * arr, int n){
    memsetV(arr, 0, 101);
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        arr[x]++;
    }
}

int arrayIntersection(int * arr, int * arr2){
    int res = 0;
    for(int i = 1; i <= 100; ++i){
        res += min(arr[i], arr2[i]);
    }
    return res;
}

int main(){

    int a[101];
    int b[101];
    int n;

    cin >> n;

    readArray(a, n);
    readArray(b, n);

    cout << arrayIntersection(a, b);


    return 0;
}

/*
void printArray(int * arr, int n){
    for(int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}*/
