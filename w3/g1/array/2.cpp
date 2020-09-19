#include <iostream>

using namespace std;

int main(){

    int a[10];//init

    for(int i = 0; i < 20; ++i){
        a[i] = i + 1;//set
    }

    for(int i = 0; i < 10; ++i){
        cout << a[i]  << " ";//get
    }

    return 0;
}