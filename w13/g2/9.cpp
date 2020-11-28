#include <iostream>

using namespace std;

int main() {

    string s = "321";
    do{
        for (int i = 0; i < s.size(); ++i)
        {
            cout << s[i] << ' ';
        }
        cout << endl;
    }while (prev_permutation(s.begin(),s.end()));

    return 0;
}
