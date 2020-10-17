#include <iostream>
#include "headers/superfunctions.h"

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    readArray(a, n);
    printArray(a, n);

    return 0;
}
