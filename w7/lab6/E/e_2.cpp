#include <iostream>
#include <cmath>
#include <iomanip>  

using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

    double d = sqrt(a * a + b * b);

    cout << setprecision(4) << d << endl;


    return 0;
}