#include <iostream>
#include <string>

using namespace std;

int main (){

    char c[5];
    c[0] = 't';
    c[1] = 'e';
    c[2] = 's';
    c[3] = 't';
    c[4] = '\0';

    string str(c);

    cout << c << endl;
    cout << str << endl;


    return 0;
}