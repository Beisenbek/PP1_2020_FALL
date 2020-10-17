#include <iostream>

using namespace std;

int main(int n, char ** a){

    cout << n << endl;

    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }

    return 0;
}

