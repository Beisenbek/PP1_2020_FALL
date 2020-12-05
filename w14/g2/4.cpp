#include <iostream>

using namespace  std;

//((*(a + i)) + j)

void f(int ** a, int r, int c){
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


void g(int ** a, int r, int c){
    for(int i = 0; i < r; ++i){
        a[i] = new int[c];
        for(int j = 0; j < c; ++j){
            a[i][j] = 1;
        }
    }
}


int main() {

    int ** a;

    int r = 10;
    int c = 5;

    g(a, r, c);
    f(a, r, c);

    return 0;
}
