#include <iostream>
#include <set>

using namespace std;

int main() {

    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(1);
    ms.insert(2);

    pair<multiset<int> :: iterator, multiset<int> :: iterator> r = ms.equal_range(1);

    multiset<int> :: iterator it;

    for(it = r.first; it != r.second; ++it){
        cout << *it << " ";
    }

    return 0;
}
