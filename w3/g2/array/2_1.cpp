#include <iostream>

using namespace std;

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    int n = sizeof(a) / sizeof(int);

    for(int i = 0; i < n; i = i + 1){
        cout << a[i] << " ";
    }

    return 0;
}