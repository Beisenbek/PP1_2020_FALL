#include <iostream>
#include <algorithm>

using namespace std;

int main() {


    int a[] = {1, 2, 3};


    //cout << sizeof(a) << endl;
    //cout << sizeof(int) << endl;
    int n = sizeof(a) / sizeof(int);

    next_permutation(a, a + n);
    next_permutation(a, a + n);
    next_permutation(a, a + n);
    next_permutation(a, a + n);
    next_permutation(a, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
