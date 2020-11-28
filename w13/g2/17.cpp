#include <iostream>
#include <vector>
#include <random>
#include <time.h>


using namespace std;

int g() {
    int left = 5;
    int right = 100;
    int res = rand() % right;
    if(res < left) res = left;
    return res;
}

void f(int x){
    cout << x << " ";
}


int main() {

    srand(time(0));

    vector<int> v(10);

    generate(v.begin(), v.end(), g);

    for_each(v.begin(),v.end(), f);


    return 0;
}
