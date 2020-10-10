#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string fname;
    cin >> fname;

    freopen(fname.c_str(), "r", stdin);

    string data;
    cin >> data;
    cout << data;


    return 0;
}