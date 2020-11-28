#include <iostream>
#include <algorithm>

using namespace  std;


int main() {

    int a[] = {11, 2, 43, 41, 5, 6, 17, 8, 9, 10};
    int len = sizeof(a) / sizeof(int);

    sort(a, a + len, greater<int>());
   //sort(a, a + len, less<int>());

    for(int i = 0; i < len; ++i){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
