#include <iostream>

using namespace std;


void f(string a, string b){
    cout <<  a << ":" << b  << endl;
}


int main(){

    string a,b;
    cin >> a >> b;

    f(a, b);

    return 0;
}

