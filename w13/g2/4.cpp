#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int a[] = {1, 21, 13, 43, 555, 6};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n);

    reverse(a, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
