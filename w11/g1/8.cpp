#include <iostream>
#include <map>

using namespace std;

int main() {

    multimap<string, int> mm;


    mm.insert(make_pair("banana",300));
    mm.insert(make_pair("apple", 123));
    mm.insert(make_pair("apple", 124));
    mm.insert(make_pair("apple", 125));
    mm.insert(make_pair("apple", 126));
    mm.insert(make_pair("apple2", 140));


    string str;
    cin >> str;
    pair<multimap<string, int> :: iterator, multimap<string, int> :: iterator> res = mm.equal_range(str);

    multimap<string, int> :: iterator  it;

    for(it = res.first; it != res.second; ++it){
        cout <<  (*it).second << " ";
    }

    return 0;
}
