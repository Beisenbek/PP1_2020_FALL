#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string text;
    cin >> text;

    for(int i = 0; i < text.size(); ++i){
        if(text[i] <= 'z' && text[i] >= 'a'){
            cout << char(text[i] - 32);
        }
        else cout << text[i];
    }

    return 0;
}