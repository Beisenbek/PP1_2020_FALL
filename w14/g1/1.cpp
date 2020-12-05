#include <iostream>

using namespace  std;

void f(int * t, int n){
    t[0] = 12;
    for(int i = 0; i < n; ++i){
        cout << t[i] << " ";
    }
}

int main() {

    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(int);

    f(a, n);

    cout << endl << a[0] << endl;

    return 0;
}
