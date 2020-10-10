#include <iostream>

using namespace std;


int main(){

    string text = "ABCD";

    text.insert(1, "TEST", 2);

    cout << text << endl;

    return 0;
}