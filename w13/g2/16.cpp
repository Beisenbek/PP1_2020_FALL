#include <iostream>
#include <vector>

using namespace std;

void f(int x){
    cout << x * x << " ";
}


int main() {

    vector<int> v = {1, 1, 1, 2, 2, 3, 4, 4, 1, 1};

    for_each(v.begin(),v.end(), f);


    return 0;
}
