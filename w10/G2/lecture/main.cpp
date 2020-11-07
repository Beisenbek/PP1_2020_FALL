#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace  std;

void f1() {
    vector<int> v;
    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    for(int i = 0; i < v.size(); ++i){
        cout << v.at(i) << " ";
    }
}

void f2() {
    vector<int> v;
    for(int i = 0; i < 100; ++i){
        v.push_back(i);
    }

    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }

}

void f3() {
    set<int> s;
    for(int i = 10; i >= 1; --i){
        cout << i << " ";
        s.insert(i);
    }
    cout << endl;
    for(int i = 10; i >= 1; --i){
        cout << i << " ";
        s.insert(i);
    }

    cout << endl;

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
}

void f4() {
    set<int> s;
    s.insert(-1);
    s.insert(-10);
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(2);
    s.insert(2);

    cout << s.size() << endl;

    cout << *s.begin() << " " << *s.rbegin() << endl;
}

void f5() {
    set<int> s;

    int x;
    while(1){
        cin >> x;
        if(x == 0) break;
        s.insert(x);
    }

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
}

void f6() {
    map<string, int> m;

    string  word;

    while(1){
        cin >> word;
        if(word == "end") break;
        m[word] = m[word] + 1;
    }

    map<string , int> :: iterator it;

    for(it = m.begin(); it  != m.end(); ++it){
        cout << (*it).first  << "->" << (*it).second << endl;
    }

    cout << m["hello"] << endl;
    cout << m["test"] << endl;

}


void f7() {
    map<string, string> m;

    m["test"] = "1234";
    m["test2"] = "5678";

    m.insert(make_pair("apple","6789"));
    m.insert(make_pair("apple2","16789"));
    m.insert(make_pair("apple","00000"));

    m["test2"] = "test!!!!!";

    pair<string, string> p("green","2345234");
    pair<string, string> p2;
    p2.first = "yellow";
    p2.second = "5367456";

    m.insert(p);
    m.insert(p2);


    map<string , string> :: iterator it;

    for(it = m.begin(); it  != m.end(); ++it){
        cout << (*it).first  << "->" << (*it).second << endl;
    }

    cout << m["hello"] << endl;
}

void f8() {
    vector<int> v;
    for(int i = 0; i < 10; ++i){
        v.push_back(i);
    }
    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it){
        (*it) += 100;
    }

    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }

}

void print(vector<int> v){
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    v.push_back(1000);
    cout << v.size() << endl;
}

void print2(vector<int>  * v){
    vector<int> :: iterator it;
    for(it = v->begin(); it != v->end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    v->push_back(1000);
    cout << v->size() << endl;
}

void print3(vector<int> & v){
    vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    v.push_back(1000);
    cout << v.size() << endl;
}

void print4(vector<int> & v) {
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
}

void f9() {
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    print3(v);
    cout << v.size() << endl;
}

void f10() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    print4(v);
}

void f11() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int a,b;
    cin >> a >> b;

    reverse(v.begin() + a, v.begin() + b + 1);

    print4(v);
}

bool isPrime(int x){
    if(x == 1) return  false;
    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cnt++;
        }
    }
    return  cnt <= 2;
}

bool isPrime2(int x){
    if(x == 1) return  false;
    bool res = true;
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0){
            res = false;
            break;
        }
    }
    return  res;
}

void f12() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int k;
    cin >> k;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if(isPrime(v[i]) && k <= v[i]){
            cnt++;
        }
    }
    cout << cnt;
}


int main() {

    f12();

    return 0;
}
