#include <iostream>

using namespace std;

bool f(int * a, int n, int x){
    bool result = false;
    for(int i = 0; i < n; ++i){
        if(a[i] == x){
            result = true;
            break;
        }
    }
    return result;
}

bool f2(int * a, int n, int i, int x){
   if(i >= n) return false;
   if(a[i] == x) return true;
   return f2(a, n, i + 1, x);
}

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    if(f(a, n, x)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    if(f2(a, n, 0, x)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}