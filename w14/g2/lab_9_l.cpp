#include <iostream>
#include <set>
#include "car.h"
using  namespace std;

bool f( pair<int, int> a,  pair<int, int> b) {
    if (a.first < b.first) return true;
    if(a.first == b.first){
        if(a.second < b.second) return true;
    }
    return false;
}

int main() {

    int n;
    cin >> n;

    int x, y;
    pair<int, int> a[n];

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        a[i] = make_pair(x + y, i + 1);
    }

    sort(a, a + n, f);

    for(int i = 0; i < n; ++i){
        cout << a[i].second << endl;
    }


    return 0;
}
