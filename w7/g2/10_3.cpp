#include <iostream>
#include <algorithm>
using namespace std;


int minS(int a, int b, int c){
    cout << min(a, min(b, c)) << endl;
}


int main(){


    int a, b;
    int c;

    cin >> a >> b >> c;
    minS(a, b, c);


    return 0;
}

`   