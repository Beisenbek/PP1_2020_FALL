#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int y = x++;
    cout << y << " " << x << endl;//1 2
    int z = ++x;
    cout << z << " " << x << " " << endl;//3 3


    return 0;
}