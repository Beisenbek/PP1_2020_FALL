#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 0) cout << "0";
    else{
        for(;n > 0;n = n / 10){
            cout << n % 10 << " ";
        }
    }

    return 0;
}