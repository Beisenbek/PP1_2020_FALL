#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {1, 21, 13, 43, 555, 6};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n);

    for(int i = n - 1; i >= 0; --i){
        cout << a[i] << " ";
    }

    return 0;
}
