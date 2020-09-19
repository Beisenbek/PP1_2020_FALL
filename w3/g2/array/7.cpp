#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int y = ++i;
    cout << y << " " << i << endl;

    int j = 1;
    int x = j++;
    cout << x << " "<< j << endl;
   
    return 0;
}