#include <iostream>

using namespace std;


int main(){

    string str = "ABCD";

    cout << str.substr(1, 2) << endl;
    cout << str.substr(2) << endl;

    cout << str << endl;

    return 0;
}