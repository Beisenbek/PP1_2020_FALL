#include <iostream>
#include <queue>

using namespace  std;

int main() {

    queue<int> q;

    q.push(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(13);
    q.push(12);

    while(q.size() > 0 ){
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}
