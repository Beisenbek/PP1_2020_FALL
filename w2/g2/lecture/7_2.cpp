#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    bool s1 = (a + b > c);
    bool s2 = (a + c > b);
    bool s3 = (c + b > a);

    if(s1 && s2 && s3){
        cout << "ok!" << endl;
    }else{
        cout << "no!" << endl;
    }


    return 0;
}