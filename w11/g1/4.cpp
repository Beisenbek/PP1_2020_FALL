#include <iostream>
#include <stack>

using namespace std;

int main() {

    string str;
    cin >> str;

    stack<char> st;

    bool correct = true;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            st.push('(');
        }else if(str[i] == ')'){
             if(st.size() > 0){
                st.pop();
             }else{
                 correct = false;
                 break;
             }
        }else{
            cout << int(str[i]) << "!!!!" << endl;
        }
    }


    if(!st.empty() || correct == false){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}


