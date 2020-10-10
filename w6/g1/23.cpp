#include <iostream>
#include <string>

using namespace std;

int main (){

    string str = "test";

    int n = str.size();
    char buffer[n];
    str.copy(buffer, n, 0);
    //c[n] = '\0';


    cout << c << endl;
    //cout << str << endl;


    return 0;
}