#include <iostream>

using namespace std;

int main(){
    int a[3];
    /*
    a[0] = 1;
    a[1] = 12;
    a[2] = 3;
    */
    //cout << a[0] << " " << a[1] << " " << a[2] << endl;
    *a = 1;
    *(a + 1) = 12;
    *(a + 2) = 3;
    cout << *a << " " << *(a + 1) << " " << *(a + 2) << endl;
    //cout << a + 1 << endl;
    return 0;
}