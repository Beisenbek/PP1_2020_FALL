#include <iostream>
#include <vector>
#include <map>

using namespace  std;



void f(int ** a, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; ++j){
            //cout << *(a[i] + j) << " ";
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int ** a;
    int r = 20;
    int c = 4;

    for(int i = 0; i < r; i++){
        a[i] = new int[c];
        for(int j = 0; j < c; j++){
            a[i][j] = 1;
        }
    }

    f(a, r, c);


    return 0;
}