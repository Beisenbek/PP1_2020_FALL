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


    multimap<string, int> :: iterator  it;

    for(it = mm.begin(); it != mm.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}
