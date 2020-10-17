#include <iostream>

using namespace std;

//signature
int apb(int a, int b){ 
    //body
    int c = a + b;
    return a + b;
}


int main(){

    int x, y;
    cin >> x >> y;

    int z = apb(x, y);

    cout << z << endl;

    return 0;
}