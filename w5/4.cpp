#include <iostream>

using namespace std;

int main(){

    int n, m;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    cin >> m;
    int b[m];

    for(int i = 0; i < m; ++i){
        cin >> b[i];
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    for(int i = 0; i < n; ++i){
        cout << b[i] << " ";
    }

    return 0;
}