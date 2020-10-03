#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int m;
    cin >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    for(int i = 1; i < n; i = i + 2){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << " " ;
        }
       cout << endl;
    }

    return 0;
}