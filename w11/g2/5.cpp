#include <iostream>
#include <stack>

using namespace  std;

int main() {

    stack<char> my_stack;

    string str;
    cin >> str;

    bool res = true;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            my_stack.push('(');
        }else if(str[i] == ')'){
            if(!my_stack.empty()){
                my_stack.pop();
            }else{
                res = false;
                break;
            }
        }
    }

    if(my_stack.empty() && res == true){
        cout << "YES";
    }else{
        cout << "NO";
    }


    return 0;
}
