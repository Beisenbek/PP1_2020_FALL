#include <iostream>

using namespace std;

int main(){

    int a = 22;
    int b = 7;

    cout << (a * 1.0) / b << endl;
    cout << a  / (b * 1.0) << "\n";
    cout << float(a)  / b << endl;

    return 0;
}