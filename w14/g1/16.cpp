#include <iostream>
#include "student.h"

using namespace  std;


int main() {

    int n;
    cin >> n;
    student s[n];

    for(int i = 0; i < n; ++i){
        s[i].read();
    }

    sort(s, s + n, f3);

    for(int i = 0; i < n; ++i){
        s[i].print();
    }

    return 0;
}
