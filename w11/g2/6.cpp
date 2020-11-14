#include <iostream>
#include <set>

using namespace  std;

int main() {

    multiset<int> ms;

    ms.insert(1);
    ms.insert(10);
    ms.insert(11);
    ms.insert(1);
    ms.insert(13);


    multiset<int> :: iterator it;

    for(it = ms.begin(); it != ms.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
