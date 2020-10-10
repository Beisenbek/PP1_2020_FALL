#include <iostream>

using namespace std;

int main(){

    string str, x;
    cin >> str >> x;

    int cnt = 0;

    size_t pos = 0;

    while(str.find(x, pos) != string::npos){
        cnt++;
        pos = str.find(x, pos) + 1;
    };

    cout << cnt << endl;

    return 0; 
}