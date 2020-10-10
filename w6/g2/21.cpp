#include <iostream>
#include <sstream>

using namespace std;

int main(){


    string str = "ABCD";

    int n = str.size();
    char str_copy[n];

    str.copy(str_copy, n, 0);
    //str_copy[n] = '\0';

    cout << str_copy << endl;

    return 0;
}