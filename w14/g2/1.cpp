#include <iostream>

using namespace  std;

int main() {


    int a[] = {1,2 ,3 };

    cout << a << endl;
    cout << a + 2 << endl;

    cout << *(a + 2) << endl;//pointer

    int n = 8;
    cout << n << endl;
    cout << &n << endl;//reference

    cout << &*&*&n << endl;

    return 0;
}
