#include <iostream>
#include <vector>
#include <map>

using namespace  std;


void f(map<int, int> * w){
    cout << w->size() << endl;
}

int main() {

    map<int, int> m;
    m.insert(make_pair(2,3));
    m.insert(make_pair(12,3));
    m.insert(make_pair(21,3));
    m.insert(make_pair(222,3));

    f(&m);

    return 0;
}