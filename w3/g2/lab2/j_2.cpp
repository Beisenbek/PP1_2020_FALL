#include <iostream>
//possible solution
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    char c;
    while(cin >> c){
        if(c == '0') cnt++;
    }
    cout << cnt << endl;

    return 0;
}