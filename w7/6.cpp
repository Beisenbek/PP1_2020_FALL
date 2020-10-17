#include <iostream>

using namespace std;

void printer(string text){
    cout << text << "!" << endl;
}

int main(){

    string s;
    cin >> s;

    printer(s);


    return 0;
}