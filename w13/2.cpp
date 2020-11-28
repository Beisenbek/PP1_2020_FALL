#include <iostream>
#include <algorithm>

using namespace  std;


int main() {

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int len = sizeof(a) / sizeof(int);

    do{
        for(int i = 0; i < len; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a, a + len));


    return 0;
}
