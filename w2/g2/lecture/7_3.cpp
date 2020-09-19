#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if((a + b > c) &&  (a + c > b) && (c + b > a)){
        cout << "ok!" << endl;
    }else{
        cout << "no!" << endl;
    }


    return 0;
}