#include <iostream>
#include <set>

using namespace std;

typedef multiset<int> :: iterator m_s_it;

int main() {

    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(1);
    ms.insert(2);

    pair<m_s_it, m_s_it> r = ms.equal_range(1);

    for(m_s_it it = r.first; it != r.second; ++it){
        cout << *it << " ";
    }

    return 0;
}
