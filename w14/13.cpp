#include <iostream>

using namespace  std;

struct point{
    int x;
    int y;
    void print(){
        cout << this->x << " " << y << endl;
    }
    void shift(int x){
        this->x = this->x * x;
        y = y * x;
    }
};

void print(point p){
    cout << p.x << " " << p.y << endl;
}


int main() {

    point p1;
    p1.x = 12;
    p1.y = 14;

    print(p1);
    p1.print();

    p1.shift(10);
    p1.print();

    return 0;
}
