#include <iostream>

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

    int sum[n];

    for(int i = 0; i < n; ++i){
        sum[i] = 0;
        for(int j = 0; j < m; ++j){
            sum[i] += a[i][j];
        }
    }

    int mx = sum[0];
    int ind = 0;

    for(int i = 1; i < n; ++i){
        if(mx < sum[i]){
            mx = sum[i];
            ind = i;
        }
    }

    cout << mx << endl << ind << endl;

    return 0;
}