#include <iostream>
#include <cmath>

using namespace std;

int a[100000];
int b[100000];
int n;

int  countOfEquals(){
    int res = 0;
    for(int i = 0; i < n; ++i){
        bool needSearch = true;

        for(int j = 0; j < i; ++j){
            if(a[i] == a[j]){
                needSearch = false;
                break;
            }
        }

        if(needSearch){
            for(int j = 0; j < n; ++j){
                if(a[i] == b[j]){
                    res++;
                }
            }
        }
    }
    return res;
}

void read(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
}

void print(){
    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; ++i){
        cout << b[i] << " ";
    }
    cout << endl;
}

int main(){

    read();

    cout << countOfEquals() << endl;

    return 0;
}