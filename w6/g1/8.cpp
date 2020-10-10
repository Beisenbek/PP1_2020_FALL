#include <iostream>

using namespace std;

int main(){

    string str;
    cin >> str;
    size_t start;
    cin >> start;
    string t = str.substr(start);
    cout << t << endl;

    return 0; 
}