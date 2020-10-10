#include <iostream>

using namespace std;


int main(){

    string text = "ABCD";

    text.insert(0, 100, '*');

    cout << text << endl;

    return 0;
}