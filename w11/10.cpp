#include <map>
#include <iostream>
#include <string>
#include <iterator>

using namespace std;


int main(){

    multimap<string, string> dict;
    dict.insert(pair<string, string>("test", "Hello"));
    dict.insert(pair<string, string>("test1", "avb"));
    dict.insert(pair<string, string>("test", "Bye!"));
    dict.insert(pair<string, string>("test2", "test"));

    pair <multimap<string, string>::iterator, multimap<string, string>::iterator> itr = dict.equal_range("test");

    for (multimap<string, string>::iterator i = itr.first; i!=itr.second; ++i){
        cout << (*i).second << " ";
    }

    cout << endl;

    for (multimap<string, string>::iterator i = itr.first; i!=itr.second; ++i){
        cout << i->second << " ";
    }
}