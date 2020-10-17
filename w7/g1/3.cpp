#include <iostream>

using namespace std;

//signature
int apb(int a, int b){ 
    //body
    int c = a + b;
    return c;
}


int main(){

    int a, b;
    cin >> a >> b;

    cout << apb(a, b) << endl;

    return 0;
}