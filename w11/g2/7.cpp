#include <iostream>
#include <set>

using namespace  std;

int main() {

    multiset<int> ms;

    ms.insert(1);
    ms.insert(10);
    ms.insert(11);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(13);
    ms.insert(13);
    ms.insert(13);

    int x;
    cin >> x;
    pair<multiset<int> :: iterator, multiset<int> :: iterator> res = ms.equal_range(x);

    multiset<int> :: iterator it;

    for(it = res.first; it != res.second; ++it){
        cout << *it << " ";
    }

    return 0;
}
