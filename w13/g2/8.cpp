#include <iostream>

using namespace std;

int f(string s){
    int res = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'a'){
            res++;
        }
    }
    return  res;
}

bool comparator(string s1, string s2){
   int c1 = f(s1);
   int c2 = f(s2);
   if(c1 < c2) return  true;
   return  false;
}


int main() {

    string a[] = {"hello", "aaaa", "banana", "apple"};

    int n = 4;

    sort(a, a + n, comparator);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}
