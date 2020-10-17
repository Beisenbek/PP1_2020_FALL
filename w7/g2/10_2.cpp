#include <iostream>
#include <algorithm>
using namespace std;


//overload
int minS(int a, int b){
    if(a > b) return b;
    return a;
}

void minS(int a, int b, int c){
    cout << minS(a, minS(b, c)) << endl;
}


int main(){


    int a, b;
    cin >> a >> b;

    cout << minS(a, b) << endl;

    int c;
    cin >> c;
    minS(a, b, c);


    return 0;
}

