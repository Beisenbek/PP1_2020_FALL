//https://informatics.mccme.ru/mod/statements/view.php?id=2296#1

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    
    int a, b;
    cin >> a >> b;

    double c = sqrt(a * a + b * b);
    cout << c;

    return 0;
}