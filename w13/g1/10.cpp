#include <iostream>
#include <algorithm>
#include <vector>

using namespace  std;


int main() {

    int myints[] = {10,20,20,20,30,30,20,20,10};
    int n = sizeof(myints) / sizeof(int);

    vector<int> v(myints, myints + n);

    vector<int>:: iterator it = unique(v.begin(), v.end());

    vector<int> :: iterator  it2;

    cout << distance(v.begin(), it) << endl;
    v.resize(distance(v.begin(), it));

    for(it2 = v.begin(); it2 != v.end(); ++it2){
        cout << *it2 << " ";
    }

    return 0;
}
