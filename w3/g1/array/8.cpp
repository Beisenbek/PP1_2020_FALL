#include <iostream>

using namespace std;

int main(){

    int a[10];//init

    for(int i = 0; i < 10; ++i){
        cin >> a[i];
    }

    int best = a[0];

    for(int i = 1; i < 10; ++i){
        if(best < a[i]){
            best = a[i];
        }
    }

    cout << best << endl;

    return 0;
}