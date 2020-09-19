#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    bool isTriangle = false;

    if(a + b > c)
        if(a + c > b)
            if(c + b > a)
                isTriangle = true;

    if(isTriangle)
        cout << "ok!" << endl;
    else
        cout << "no!" << endl;


    return 0;
}