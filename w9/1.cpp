#include <iostream>

using namespace std;

int f(int n){
    if(n == 1) return 1;
    return f(n - 1) + n;
}

int f2(int n){
   int s = 0;
   for(int i = 1; i <= n; ++i){
       s += i;
   }
   return s;
}

int f3(int n){
   return ((n+1) * n)/2;
}


int main(){

    int x;
    cin >> x;

    cout << f(x) << endl << f2(x) << endl << f3(x);

    return 0;

}