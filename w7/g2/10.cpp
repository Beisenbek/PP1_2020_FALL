#include <iostream>
#include <algorithm>
using namespace std;


//overload

int minS(int a, int b){
    if(a > b) return b;
    return a;
}

int minS(int a, int b, int c){
    return minS(a, minS(b, c));
}

int minS(int a, int b, int c, int d){
    return minS(minS(a,b), minS(c, d));
}


int main(){


    int a, b;
    cin >> a >> b;

    cout << minS(a, b) << endl;

    int c;
    cin >> c;
    cout << minS(a, b, c) << endl;


    return 0;
}

