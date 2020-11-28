#include <iostream>
#include <algorithm>
#include <cmath>

using namespace  std;



int cnt3(int x){
    int res = 0;

    for(int i = 1; i * i <= x; ++i){
        if(x % i == 0){
            int p = i;
            int q = x / p;
            if(p == q){
                res += 1;
            }else{
                res += 2;
            }
        }
    }

    return  res;
}

int cnt2(int x){
    int res = 0;

    int w = int(sqrt(x));

    for(int i = 1; i <= w; ++i){
        if(x % i == 0){
            int p = i;
            int q = x / p;
            if(p == q){
                res += 1;
            }else{
                res += 2;
            }
        }
    }

    return  res;
}

int cnt(int x){
    int res = 0;

    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            res++;
        }
    }

    return  res;
}


bool f(int a1, int a2){
    int c1 = cnt(a1);
    int c2 = cnt(a2);
    bool res = c1 < c2;
    return res;
}


int main() {

    int a[] = {11, 2, 43, 41, 5, 6, 17, 8, 9, 10};
    int len = sizeof(a) / sizeof(int);

    //sort(a, a + len, f);

    for(int i = 0; i < len; ++i){
        cout << a[i] << "=> " << cnt(a[i]) << "=> " << cnt2(a[i]) << "=> " << cnt3(a[i]) << endl;
    }

    return 0;
}
