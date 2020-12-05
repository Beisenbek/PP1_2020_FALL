#include <iostream>
#include <vector>
#include <map>

using namespace  std;

int main() {

    int n = 4;
    int &c = n;
    int *p = &n;
    cout << &n << endl;
    cout << &c << endl;
    cout << p << endl;

    n = 12;

    cout << n << endl;
    cout << c << endl;
    cout << *p << endl;


    cout << "======" << endl;

    *p = 13;

    cout << n << endl;
    cout << c << endl;
    cout << *p << endl;


    cout << "======" << endl;

    c = 14;

    cout << n << endl;
    cout << c << endl;
    cout << *p << endl;

    return 0;
}