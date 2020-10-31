#include <iostream>

using namespace std;

//tail recursion
string toBinary(int n, string res){
    if(n == 0) return res;
    return toBinary(n / 2, char( n % 2 + 48) + res);    
}


int main(){

    int n;
    cin >> n;

    cout << toBinary(n, "") << endl;

    return 0;
}