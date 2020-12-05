#include <iostream>

using namespace  std;

struct point {
    int x = 6;
    int y = 7;
    int z = 8;

    point(){

    }

    point(int x, int y, int z){
        this->x = x;
        this->y = y;
        this->z = z;
    }

    void print() {
        cout << x << " " << y <<  " " << z << endl;
    }
};

int main() {

    point p1(10, 20, 30);
    point p2;

    p1.print();
    p2.print();

    int x, y, z;
    cin >> x >> y >> z;

    point p3(x, y, z);
    p3.print();

    return 0;
}
