#include <iostream>

using namespace std;

int main(){

    string str, x;
    cin >> str >> x;

    int cnt = 0;

    size_t pos = 0;
    size_t fpos = 0;

    do{
        fpos = str.find(x, pos);
        if( fpos != string::npos){
            pos = fpos + 1;
            cnt++;
        }
    }while(fpos != string::npos);

    cout << cnt << endl;

    return 0; 
}