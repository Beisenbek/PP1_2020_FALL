#include <iostream>

using namespace  std;

struct student{
    string name;
    int score;
    string iin;
    string school;

    void read(){
        cin >> name >> score >> iin >> school;
    }

    void print(){
        cout << name << " " << score << " "  << iin  << " "  << school << endl;
    }
};

bool f(student s1, student s2){
    if(s1.score > s2.score) return  true;
    return  false;
}

bool f2(student s1, student s2){
    if(s1.iin < s2.iin) return  true;
    return  false;
}

bool f3(student s1, student s2){
    if(s1.score > s2.score) return  true;
    if(s1.score == s2.score){
        if(s1.name > s2.name) return  true;
    }
    return  false;
}


int main() {

    int n;
    cin >> n;
    student s[n];

    for(int i = 0; i < n; ++i){
        s[i].read();
    }

    sort(s, s + n, f3);

    for(int i = 0; i < n; ++i){
        s[i].print();
    }

    return 0;
}
