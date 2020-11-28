#include <iostream>
#include <algorithm>
#include <vector>

using namespace  std;


bool f(int x){
    if(x % 2 == 0) return  true;
    return false;
}

int main() {

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);


    int res = count_if(v.begin(), v.end(), f);

    cout << res << endl;


    return 0;
}
