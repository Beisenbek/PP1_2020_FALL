#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int cnt = 0;

    for(int i = 0; i < n; ++i){
        if(a[i] % 2 == 0){
            cnt = cnt + 1;
        }
    }

    cout << cnt;


    return 0;
}