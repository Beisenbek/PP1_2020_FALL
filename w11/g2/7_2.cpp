#include <iostream>
#include <set>

using namespace  std;

typedef multiset<int> :: iterator m_s_i;

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

    pair<m_s_i, m_s_i> res = ms.equal_range(x);

    for(m_s_i it = res.first; it != res.second; ++it){
        cout << *it << " ";
    }

    return 0;
}
