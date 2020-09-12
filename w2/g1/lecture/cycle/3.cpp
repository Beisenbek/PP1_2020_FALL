#include <iostream>

using namespace std;

int main(){

    cout << "start\n";

    int y;

    for(int x = 1;; x = x + 1){
        y = x;
        if (x > 100) break;
    }

    cout << y;

    cout << "end\n";

    return 0;
}