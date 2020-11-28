#include <iostream>
#include <vector>

using namespace std;


int main() {

    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);

    fill(a, a + n, 7);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


    return 0;
}
