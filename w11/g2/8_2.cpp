#include <iostream>
#include <map>

using namespace  std;

int main() {

    multimap<string, int> mm;

    mm.insert(make_pair("banana",400));
    mm.insert(make_pair("apple",123));
    mm.insert(make_pair("apple",123));
    mm.insert(make_pair("apple",124));
    mm.insert(make_pair("zupi",600));
    mm.insert(make_pair("apple",125));
    mm.insert(make_pair("apple",126));
    mm.insert(make_pair("apple",127));
    mm.insert(make_pair("apple",128));
    mm.insert(make_pair("apple",129));

    for(auto it = mm.begin(); it != mm.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
