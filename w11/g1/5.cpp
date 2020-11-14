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

    multiset<int> :: iterator it;

    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
