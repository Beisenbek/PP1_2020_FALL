#include <iostream>

using namespace std;

//overload

void printer(string text){
    cout << text << "!" << endl;
}

void printer(string text, string str2){
    cout << text << str2 << endl;
}

int main(){

    string s;
    cin >> s;

    string t;
    cin >> t;

    printer(s, t);
    printer(s);


    return 0;
}