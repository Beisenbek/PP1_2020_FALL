#include <iostream>

using namespace std;

//tail recursion
string f(int n, string res){
     if(n == 0) return res;
     return f(n / 2,  char(n % 2 + 48) +  res);
}

int main(){

    int n;
    cin >> n;

    cout << f(n, "") << endl;

    return 0;
}