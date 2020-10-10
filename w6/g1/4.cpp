#include <iostream>

using namespace std;

int main(){

    string str;
    getline(cin, str);
    cout << str[1] << endl;
    cout << int(str[1]) << endl;

    return 0; 
}