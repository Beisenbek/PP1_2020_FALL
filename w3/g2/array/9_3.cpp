#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = n - 1; i >= 0; i--){
        if(a[i] == x){
            found = true;
            break;
        }
    }

    cout << ((found == true) ? "found" : "not found!");

    
    return 0;
}