#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main (){

    stringstream ss;

    string str;
    int cnt = 0;

    while(cin >> str){
        ss << str << " ";
        cnt++;
    }

    cout << cnt << endl;

    for(int i = 0; i < cnt; ++i){
        ss >> str;
        cout << str << " ";
    }

    cout << endl;

    //string t = ss.str();
    

    return 0;
}