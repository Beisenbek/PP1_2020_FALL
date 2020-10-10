#include <iostream>

using namespace std;

int main(){

    string str;
    getline(cin, str);

    cout << str.size() << endl;

    /*
    for(size_t i = 0; i < str.length(); ++i){
        cout << str[i] << endl;
    }*/

    for(int i = 0; i < str.length(); ++i){
        cout << str[i] << endl;
    }

    return 0; 
}