#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<int> q;

    q.push(12);
    q.push(14);
    q.push(11);
    q.push(10);
    q.push(1);
    q.push(2);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}
