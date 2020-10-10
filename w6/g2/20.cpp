#include <iostream>
#include <sstream>

using namespace std;

int main(){

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
        cout << str << endl;
    }

    string res = ss.str();

    cout << res  << endl;
    
    ss.str("");

    cout << ss.str() << endl;

    return 0;
}