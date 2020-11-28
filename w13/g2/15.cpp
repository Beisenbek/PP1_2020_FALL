#include <iostream>
#include <vector>

using namespace std;

int main() {

    int a[]  = {1,1,1,2,2,3,4,4,1,1};
    int n = sizeof(a)/ sizeof(int);
    vector<int> v(a, a + n);

   vector<int>:: iterator it = unique(v.begin(), v.end());

   v.resize(distance(v.begin(),it));

   vector<int> :: iterator it2;

    for(it2 = v.begin(); it2 != it; ++it2){
        cout << *it2<< " ";
    }

    cout << endl;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }


    return 0;
}
