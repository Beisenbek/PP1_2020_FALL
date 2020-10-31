#include <iostream>

using namespace std;

void print(int * a[100], int n, int m){

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    
    int n, m, x;
    cin >> n >> m;

    int * a[n];

    for(int i = 0; i < n; ++i){
        a[i] = new int[m];
        for(int j = 0; j < m; ++j){
            cin >> x;
            a[i][j] = x;
        }
    }

    print(a, n, m);

    return 0;
}