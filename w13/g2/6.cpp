#include <iostream>
#include <algorithm>

using namespace std;

//comparator

bool f(int a, int b){
    if(a > b) return  true;
    return  false;
}

bool f2(int a, int b){
    if(a < b) return  true;
    return  false;
}


int main() {

    int a[] = {1, 21, 13, 43, 555, 6};
    int n = sizeof(a) / sizeof(int);

    sort(a, a + n, f);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
