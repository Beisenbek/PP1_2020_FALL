#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v(10);

    fill(v.begin() + 2, v.end(), 2);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }


    return 0;
}
