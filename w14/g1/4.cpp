#include <iostream>
#include <vector>

using namespace  std;


void f(int x){
    cout << "in the function f:" << endl;
    cout << &x << endl;
    cout << x << endl;
}

void f2(int * x){
    cout << "in the function f2:" << endl;
    cout << x << endl;
    cout << *x << endl;
    cout << *&*&*x << endl;
}

void f3(int & x){
    cout << "in the function f3:" << endl;
    cout << x << endl;
    cout << &x << endl;
}

int main() {

    int n = 8;
    cout << "in the main:" << endl;
    cout << &n << endl;
    cout << n << endl;


    //f(n);
    //f2(&n);
    f3(n);

    return 0;
}