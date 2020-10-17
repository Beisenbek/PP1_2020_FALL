#include <iostream>

using namespace std;


string f(string a, string b){
    return a + ":" + b;
}


int main(){

    string a,b;
    cin >> a >> b;

    string x = f(a, b);

    cout << x << endl;

    return 0;
}

