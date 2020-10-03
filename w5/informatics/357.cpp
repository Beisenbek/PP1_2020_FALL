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

    int best = a[0][0];
    int r = 0;
    int c = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(best < a[i][j]){
                best = a[i][j];
                r = i;
                c = j;
            }
        }
    }

    if(best == INT_MIN) cout << "NO RESULT";
    else 
    cout << best << endl << r << " " << c << endl;


    return 0;
}