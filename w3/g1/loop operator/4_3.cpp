#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int a = x++ + ++x;
    //a = [1] + [3]
    cout << a << endl;

    return 0;
}