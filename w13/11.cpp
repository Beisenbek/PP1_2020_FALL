#include <iostream>
#include <algorithm>
#include <vector>

using namespace  std;


void f(int x){
    cout << x << " ";
}

int main() {

    int myints[] = {10,20,20,20,30,30,20,20,10};
    int n = sizeof(myints) / sizeof(int);
    vector<int> v(myints, myints + n);

    for_each(v.begin(),v.end(), f);


    return 0;
}
