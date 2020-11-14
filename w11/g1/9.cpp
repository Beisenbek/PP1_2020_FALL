#include <iostream>
#include <vector>

using namespace std;

vector<int> v1;
vector<int> v2;

void printContent(vector<int> * v){
    for(int i = 0; i < 10; ++i){
        cout << v->at(i) << " ";
    }
}

void generateContent(vector<int> * v){
    for(int i = 0; i < 10; ++i){
        v->push_back(i);
    }
}

int main() {

    generateContent(&v1);
    //printContent(&v1);

    generateContent(&v2);
    //printContent(&v2);

    cout << v1.size() << endl;
    cout << v2.size() << endl;

    return 0;
}
