#include <iostream>
#include <vector>
#include <map>

using namespace  std;


void f(int *a[10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; ++j){
            //cout << *(a[i] + j) << " ";
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int * a[10];

    for(int i = 0; i < 10; i++){
        a[i] = new int[10];
        for(int j = 0; j < 10; j++){
            a[i][j] = 1;
        }
    }

    f(a);


    return 0;
}