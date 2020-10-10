#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;

    size_t start, len;
    cin >> start >> len;

    cout << str.substr(start, len) ;

    return 0; 
}