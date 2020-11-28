#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string a[] = {"A", "B", "C", "D"};

    int n = 4;

    do{
        for(int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a, a + n));


    return 0;
}
