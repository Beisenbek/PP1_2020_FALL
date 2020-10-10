#include <iostream>

using namespace std;


int main(){

    string text;
    string pattern;

    cin >> text >> pattern;

    int cnt = 0;
    size_t pos = 0;

    do{
        pos = text.find(pattern, pos);
        if(pos != string :: npos){
            cnt++;
            pos++;
        }
    }while(pos < string::npos);

    cout << cnt <<  endl;

    return 0;
}