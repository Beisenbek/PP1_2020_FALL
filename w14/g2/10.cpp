#include <iostream>
#include <set>

using  namespace std;

struct car{
    string id;
    string color;
    int max_speed;
    string brand;

    car(string id, string brand, string color, int max_speed){
        this->id = id;
        this->brand = brand;
        this->color = color;
        this->max_speed = max_speed;
    }

    void print(){
        cout << this->id << " " << color << " " << max_speed << " " << brand << endl;
    }

    bool operator < (const car other) const {
        return this->id < other.id;
    }

    car operator + (const car other) const {
        return car(this->id + other.id,
                   this->brand + other.brand,
                   this->color + other.color,
                   max(this->max_speed, other.max_speed));
    }
};

int main() {

    car car1("1","volvo","red",300);
    car car2("2","bmw","yellow",500);
    car car3("3","camry","black",250);
    car car4("4","reno","blue",250);
    car car5("4","reno1","blue2",2500);


    car car6 = car1 + car2;

    set<car> s;

    s.insert(car1);
    s.insert(car2);
    s.insert(car3);
    s.insert(car4);
    s.insert(car5);
    s.insert(car6);

    for(set<car> :: iterator  it = s.begin(); it != s.end(); ++it){
        car item = *it;
        item.print();
    }



    return 0;
}
