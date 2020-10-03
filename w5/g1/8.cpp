#include <iostream>

using namespace std;

int main(){

    char a[3][3][3];

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                cin >> a[i][j][k];
            }
        }
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}