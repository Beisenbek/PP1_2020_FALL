#include <iostream>

using namespace std;

int main(){

    int a[10];//init

    for(int i = 0; i < 10; ++i){
        cin >> a[i];
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0; i < 10; ++i){
        if(x == a[i]){
            found = true;
            break;
        }
    }

    if(found == true){
        cout << "found!" << endl;
    }else{
        cout << "not found!" << endl;
    }

    return 0;
}