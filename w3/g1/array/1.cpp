#include <iostream>

using namespace std;

int main(){

    int x = 1;
    int a = ++x + x++;

    cout << a << " " << x << endl;
   
    return 0;
}