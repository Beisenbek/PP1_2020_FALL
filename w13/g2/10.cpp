#include <iostream>
#include <vector>

using namespace std;

bool f(int x){
    if(x % 2 == 0) return  true;
    return  false;
}

int main() {

    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof(int);
    vector<int> v(a, a + n);

    int r = count_if(v.begin(), v.end(), f);
    int r1 = count_if(a, a + n, f);

    cout << r << endl;
    cout << r1 << endl;


    return 0;
}
