#include <iostream>
#include <cmath>

using namespace std;

int main(){


    cout << "start" << endl;
    for(int x = 1;;x = x + 1){
        cout << x << endl;
        if(x >= 10) break;
    }
    cout << "end" << endl;


    return 0;
}