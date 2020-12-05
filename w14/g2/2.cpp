#include <iostream>

using namespace  std;

int f(int x){
    x += 20;
    cout << "in the function f:" << endl;
    cout << &x << endl;
    cout << x << endl;
}


int f2(int * x){
    *x += 10;
    cout << "in the function f2:" << endl;
    cout << x << endl;
    cout << *x << endl;
}

int f3(int & x){
    cout << "in the function f3:" << endl;
    cout << x << endl;
    cout << &x << endl;
}

int main() {
    int n = 8;


    f(n);
    f2(&n);
    f3(n);

    cout << "in the main function:" << endl;
    cout << &n << endl;//reference
    cout << n << endl;

    return 0;
}
