#include <iostream>
#include <vector>

using  namespace std;

struct car{
    string id;
    string color;
    int max_speed;
    string brand;

    void print(){
        cout << id << " " << color << " " << max_speed << " " << brand << endl;
    }
};

int main() {

    car car1;
    car1.id = "1";
    car1.brand = "volvo";
    car1.color = "red";
    car1.max_speed = 300;

    car1.print();


    return 0;
}
