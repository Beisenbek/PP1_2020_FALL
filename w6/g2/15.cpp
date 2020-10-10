#include <iostream>

using namespace std;


int main(){

    string text = "ABCD";
    string x = "TEST";

    text.insert(2, x);

    cout << text << endl;

    return 0;
}