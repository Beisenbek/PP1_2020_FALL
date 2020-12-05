#include <iostream>

using namespace  std;

int main() {

    int var = 20;

    int *ptr;

    ptr = &var;

    cout << ptr << endl;
    cout << var << endl;
    cout << *ptr << endl;

    return 0;
}
