#include <iostream>
#include <vector>

using  namespace std;

struct car{
    string id;
    string color;
    int max_speed;
    string brand;

    /*
    car(string _id, string _brand, string _color, int _max_speed){
        id = _id;
        brand = _brand;
        color = _color;
        max_speed = _max_speed;
    }*/

    car(string id, string brand, string color, int max_speed){
        this->id = id;
        this->brand = brand;
        this->color = color;
        this->max_speed = max_speed;
    }

    void print(){
        cout << this->id << " " << color << " " << max_speed << " " << brand << endl;
    }
};

int main() {

    car car1("1","volvo","red",300);
    car car2("2","bmw","yellow",500);
    car car3("3","camry","black",250);

    vector<car> cars({car1, car2, car3});

    for(int i = 0; i < cars.size(); ++i){
        cars[i].print();
    }

    return 0;
}
