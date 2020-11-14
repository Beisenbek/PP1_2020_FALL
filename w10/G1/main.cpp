#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace  std;

void sample1(){
    cout << "Hello, World!" << endl;
}


void sample2(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
}

void sample3() {
    vector<int> v;
    int x = -1;
    int cnt = -1;

    while(x != 0){
        cin >> x;
        v.push_back(x);
        cnt++;
    }

    cout << cnt << endl;

    for(int i = 0; i < cnt; ++i){
        cout << v[i] << " ";
    }

}

void sample4() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    cout << v.size() << endl;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

}

void sample5() {
    vector<vector<int> > v;
    vector<int> t;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j <= i; ++j){
            t.push_back(1);
        }
        v.push_back(t);
        t.clear();
    }

    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v[i].size(); ++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

}

void sample6() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    cout << v.size() << endl;

    vector<int> :: iterator it;

    for(it = v.begin(); it != v.end(); ++it) {
        cout << (*it) << " ";
    }

}

void sample7() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    cout << v.size() << endl;

    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

}

void sample8() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    cout << v.size() << endl;

    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

}

void printVector1(vector<int>  v){
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v.at(i) << " ";
    }
}

void printVector2(vector<int> * v){
    v->push_back(12);
    cout << v->size() << endl;
    for(int i = 0; i < v->size(); ++i){
        cout << v->at(i) << " ";
    }
}

void printVector3(vector<int>  v){
    cout << v.size() << endl;
    vector<int> :: reverse_iterator it;
    for(it = v.rbegin(); it != v.rend(); ++it){
        cout << *it << " ";
    }
}

void sample9() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }
    printVector2(&v);
    cout << endl;
    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
}

void sample10() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    v.insert(v.begin() + 1, 1);
    v.insert(v.end(), 100);

    printVector1(v);
}

void sample11() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    printVector3(v);
}

void sample12() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    cout << *v.begin() << endl;
    cout << *v.end() << endl;
    cout << *v.rend() << endl;
    cout << *v.rbegin() << endl;
}

void sample13() {
    vector<int> v;
    int x;

    while(1){
        cin >> x;
        if(x != 0) v.push_back(x);
        else break;
    }

    v.insert(v.end() + 2, 100);

    printVector1(v);
}

void sample14() {
    set<int> s;
    int x;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        s.insert(x);
    }

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    set<int> :: reverse_iterator rit;
    for(rit = s.rbegin(); rit != s.rend(); ++rit){
        cout << *rit << " ";
    }
}


void sample15() {
    set<int> s;
    int x;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        s.insert(x);
    }

    int z;
    cin >> z;

    if(s.find(z) == s.end()){
        cout << "Not found!";
    }else{
        cout << "Found!";
    }

}

void sample16 () {
    map<string, string> m;

    m["orange"] = "6";
    m.insert(make_pair("apple2","6"));
    m.insert(make_pair("apple","5"));
    m.insert(make_pair("apple","15"));
    m["orange"] = "16";


    map<string, string> :: iterator  it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first  << "->"  << (*it).second << endl;
    }

    cout << m["apple3"] << endl;

}

void sample17 () {
    map<string, int> m;

    m["orange"] = 6;
    m.insert(make_pair("apple2",6));
    m.insert(make_pair("apple",5));
    m.insert(make_pair("apple",15));
    m["orange"] = 16;


    map<string, int> :: iterator  it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first  << "->"  << (*it).second << endl;
    }

    string s = "apple3";
    cout << m[s] << endl;
}

void sample18 () {
    map<string, int> m;
    string s;

    while(1){
        cin >> s;
        if(s == "end") break;
        m[s]++;
    }

    map<string, int> :: iterator  it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first  << "->"  << (*it).second << endl;
    }

}

void sample19(){
    map<string, int> m;
    string s;
    while(1){
        cin >> s;
        if(s == "end") break;
        m[s]++;
    }

    int n;
    cin >> n;
    bool found = false;

    map<string, int> :: iterator  it;
    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second == n){
            cout << (*it).first << endl;
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Not found!" << endl;
    }


}


int main() {

    sample19();

    return 0;
}
