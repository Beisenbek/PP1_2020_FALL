#include <iostream>
#include <stack>

using namespace  std;

int main() {

    stack<int> my_stack;

    my_stack.push(10);
    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);
    my_stack.push(13);
    my_stack.push(12);

    while(!my_stack.empty()){
        cout << my_stack.top() << " ";
        my_stack.pop();
    }

    return 0;
}
