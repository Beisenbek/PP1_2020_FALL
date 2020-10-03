#include <iostream>
#include <climits>

using namespace std;

int main(){

    int n;
    cin >> n;
    char a[n];

    for(int i = 0; i < n; ++i){
        a[i] = char(i + 'A');
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }


/*
    int x;
    cin >> x;

    cout << char(x);
    */
    /*

    char c;
    cin >> c;
    cout << int(c);
    */



    return 0;
}