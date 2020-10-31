#include <iostream>

using namespace std;


bool find(int * a, int n, int x){
    bool res = false;

    for(int i = 0; i < n; ++i){
        if(a[i] == x) {
            res = true;
            break;
        }
    }

    return res;
}

bool find2(int * a, int n, int i, int x){
    if(i > n - 1) return false;
    if(a[i] == x) return true;
    return find2(a, n, i + 1, x);
}


//binary search
bool find3(int * a, int l, int r, int x){
    if(l == r){
        if(a[l] == x) return true;
        else return false;
    }
    int m = (l + r) / 2;
    if(a[m] < x) return find3(a, m + 1, r, x);
    return find3(a, l, m, x);
}

//binary search iterative
bool find4(int * a, int n, int x){
    int l = 0;
    int r = n - 1;
    while(l < r){
        int m = (l + r) / 2;
        if(a[m] < x) l = m + 1;
        else r = m;
    }
    if(l == r && a[l] == x) return true;
    return false;
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

    if(find3(a, 0, n - 1, x)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    if(find4(a, n, x)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}