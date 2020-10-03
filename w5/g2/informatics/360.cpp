#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    int mx = INT_MIN;

    //cout << mx << endl;
    //cout << -(1 << 31) << endl;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(mx < a[i][j]){
                mx = a[i][j];
            }
        }
    }

    
    bool isWinner[n];

    for(int i = 0; i < n; ++i){
        isWinner[i] = false;
        for(int j = 0; j < m; ++j){
            if(mx == a[i][j]){
                isWinner[i] = true;
            }
        }
    }


    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(isWinner[i]){
            ++cnt;
        }
    }

    cout << cnt << endl;

    for(int i = 0; i < n; ++i){
        if(isWinner[i]){
            cout << i << " ";
        }
    }


    return 0;
}