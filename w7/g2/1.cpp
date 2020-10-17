#include <iostream>

using namespace std;

//signature
int f(int x);

//y = f(x) = x * x;


int main(){

    int a;
    cin >> a;

    cout << f(a);


    return 0;
}

int f(int x){
    //body
    int y = x * x;
    return y;
}