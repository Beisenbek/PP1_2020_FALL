#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string text;
    cin >> text;

    int countOfSmallLetters = 0;
    int countOfCapitalLetters = 0;

    for(int i = 0; i < text.size(); ++i){
        int code = int(text[i]);
        if(code <= 90 && code >= 65){
            countOfCapitalLetters++;
        }else if (code <= 122 && code >= 97){{
            countOfSmallLetters++;
        }
    }

    cout << countOfSmallLetters << " " << countOfCapitalLetters << endl;

    return 0;
}