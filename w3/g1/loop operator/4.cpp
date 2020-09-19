#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int a = 1;

    x = x + a;
    cout << x << " ";
    x = a + x;
    cout << x << " ";
    x += a;//x *= a, x /= a; x -= a;
    cout << x << " ";
    
    x++;//x--
    cout << x << " ";
    ++x;//--x
    cout << x << " ";

    return 0;
}