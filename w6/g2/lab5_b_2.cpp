#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string text;
    cin >> text;

    for(int i = 0; i < text.size(); ++i){
       cout << char(toupper(text[i]));
    }

    return 0;
}