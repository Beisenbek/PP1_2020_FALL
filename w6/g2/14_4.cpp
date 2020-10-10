#include <iostream>

using namespace std;


int main(){

    string text;
    string pattern;

    cin >> text >> pattern;

    int cnt = 0;
    size_t pos = 0;

    while((pos = text.find(pattern, pos)) < string::npos){
        cnt++;
        pos++;
    };

    cout << cnt <<  endl;

    return 0;
}