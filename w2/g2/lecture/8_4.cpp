#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int x = 1;
    cout << "start" << endl;
    for(;;){
        cout << x << endl;
        if(x >= 10) break;
        x = x + 1;
    }
    cout << "end" << endl;


    return 0;
}