#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main (){

    stringstream ss;

    cout << 5 << endl;

    ss << 5 << endl;

    int x;

    ss >> x;

    cout << x * x  << endl;

    return 0;
}