#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int a = 2;
    cout << i << endl;
    i = i + a;
    cout << i << endl;
    i = a + i;
    cout << i << endl;
    i += a;
    cout << i << endl;
    return 0;
}