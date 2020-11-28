#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>        // std::time
using namespace  std;

int f() {
    return  1;
}

int f2() {
    return rand() % 100;
}

int main() {

    srand(time(0));

    vector<int> v(8);
    generate(v.begin(), v.end(), f2);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
