#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int m;
    cin >> m;

    int t;
    cin >> t;


    int a[n][m][t];

   for(int i = 0; i < n; ++i){
       for(int j = 0; j < m; ++j){
           for(int k = 0; k < t; ++k){
               cin >> a[i][j][k];
           }
       }
   }


   for(int i = 0; i < n; ++i){
       for(int j = 0; j < m; ++j){
           for(int k = 0; k < t; ++k){
               cout << a[i][j][k] << " ";
           }
           cout << endl;
       }
       cout << endl;
       cout << endl;
   }

    return 0;
}