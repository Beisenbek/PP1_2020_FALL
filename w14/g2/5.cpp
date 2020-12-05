#include <iostream>
#include <vector>

using namespace  std;


void f(vector<int> v){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

void f2(vector<int> &v){

    v[0] = 10;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v({1, 2, 3, 4, 5});

    f2(v);

    cout << v[0] << endl;



    return 0;
}
