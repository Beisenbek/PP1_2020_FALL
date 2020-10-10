#include <iostream>

using namespace std;

int main(){

    string str, x;
    cin >> str >> x;

    int cnt = 0;

    size_t pos = 0;

    for(int i = 0; i < str.size(); ++i){
        size_t fpos = str.find(x, pos);
        if( fpos != string::npos){
            pos = fpos + 1;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0; 
}