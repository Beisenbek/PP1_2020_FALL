#include <iostream>
#include <vector>
#include <map>

using namespace  std;

void f(int n){
    cout << n * n << endl;
}

void f2(int * n){
    cout << (*n) * (*n) << endl;
}

void f3(int & n){
    cout << n * n << endl;
}

int main() {

    int x = 12;

    f2(&x);
    f3(x);


    return 0;
}