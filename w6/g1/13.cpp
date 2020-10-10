#include <iostream>

using namespace std;

int main(){

    string str, x;
    cin >> str >> x;

    if(str.find(x) != string::npos){
        cout << "found!" << endl;
    }else{
        cout << "not found!" << endl;
    }

    return 0; 
}