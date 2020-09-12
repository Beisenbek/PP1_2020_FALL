#include <iostream>

using namespace std;

int main(){

    cout << "start\n";

    for(int x = 1;; x = x + 1){
        cout << x;
        if (x > 100) break;
    }

    cout << "end\n";

    return 0;
}