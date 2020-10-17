#include <iostream>
#include <cmath>

using namespace std;

int a[101];
int b[101];
int n;


void read(){
    cin >> n;
    int x;

    for(int i = 1; i <= 100; ++i){
        a[i] = 0;
        b[i] = 0;
    }

    for(int i = 0; i < n; ++i){
        cin >> x;
        a[x]++;
    }

    for(int i = 0; i < n; ++i){
        cin >> x;
        b[x]++;
    }

    int res = 0;

    for(int i = 1; i <= 100; ++i){
        res += min(a[i], b[i]);
    }

    cout << res << endl;

}

int main(){

    read();


    return 0;
}