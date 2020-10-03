#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        a[i] = i + 1;
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] % 2 == 0){
            ++cnt;
        }
    }

    cout << cnt;


    return 0;
}