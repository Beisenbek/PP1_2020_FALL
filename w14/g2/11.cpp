#include <iostream>
#include <set>
#include "car.h"
using  namespace std;

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
        car r = *it;
        cout << r.getInfo() << endl;
    }

    return 0;
}
