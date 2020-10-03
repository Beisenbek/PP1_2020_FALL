#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            a[i][j] = 0;
            if(i > j) a[i][j] = 2;
            else if(i == j) a[i][j] = 1;
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    for(int i = 0; i < n; ++i){
        for(int j = n - 1; j >= 0; --j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}