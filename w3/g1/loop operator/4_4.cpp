#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int a = ++x + x++;
    //a = [2] + [2]
    cout << a << endl;
    cout << x << endl;

    return 0;
}