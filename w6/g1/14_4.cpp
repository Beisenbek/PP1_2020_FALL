#include <iostream>

using namespace std;

int main(){

    string str, x;
    cin >> str >> x;

    int cnt = 0;

    size_t pos = 0;

    while((pos = str.find(x, pos)) != string::npos){
        cnt++;
        pos++;
    };

    cout << cnt << endl;

    return 0; 
}