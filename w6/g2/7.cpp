#include <iostream>

using namespace std;


int main(){

    string str;
    str = "ABCD";

    cout << str.size() << endl;

    str = str + "FG";

    cout << str.size() << endl;
    cout << str.length() << endl;

    return 0;
}