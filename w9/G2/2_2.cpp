#include <iostream>

using namespace std;

void print(int a[][100], int n, int m){

    cout << n << " " << m << endl;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){
    
    int n, m;
    cin >> n >> m;

    int a[][100] = {{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};

    print(a, n, m);

    return 0;
}