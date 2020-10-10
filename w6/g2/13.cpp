#include <iostream>

using namespace std;


int main(){

    string str = "testtesttest";
    string x;

    cin >> x;

    if(str.find(x) == string::npos) cout << "not found!";
    else cout << "found!";

    return 0;
}