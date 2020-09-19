#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x;
    cin >> x;

    bool res = (x % 2 == 0);

    if(res == true){
        cout << "even!";
    }else{
        cout << "odd!";
    }

    return 0;
}