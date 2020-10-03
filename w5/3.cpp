#include <iostream>

using namespace std;

int main(){

    int a[10001];
    int i = 0;
    int x;

    while(true){
        cin >> x;
        if(x == 0) break;
        a[i] = x;
        i++;
    }

    for(int j = 0; j < i; ++j){
        cout << a[j] << " ";
    }


    return 0;
}