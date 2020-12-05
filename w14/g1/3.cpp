#include <iostream>
#include <vector>

using namespace  std;

void f(vector<int> t){
    t[0] = 12;

    for(int i = 0; i < t.size(); ++i){
        cout << t[i] << " ";
    }
}

void f2(vector<int> * t){
    t->at(0) = 14;

    for(int i = 0; i < t->size(); ++i){
        cout << t->at(i) << " ";
    }
}

int main() {

    vector<int> v({1, 2, 3, 4});
    f(v);
    cout << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl;

    f2(&v);
    cout << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    return 0;
}