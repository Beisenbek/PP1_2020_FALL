#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int x = ++i + i++;
    //x = [1] + [3]
    cout << x << endl;
    cout << i << endl;
    return 0;
}