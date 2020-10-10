#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string text;
    cin >> text;

    int countOfSmallLetters = 0;
    int countOfCapitalLetters = 0;

//isdigit
//isalpha
    
    for(int i = 0; i < text.size(); ++i){
        if(isupper(text[i])){
            countOfCapitalLetters++;
        }else if (islower(text[i])){
            countOfSmallLetters++;
        }
    }

    cout << countOfSmallLetters << " " << countOfCapitalLetters << endl;

    return 0;
}