#include <iostream>

using namespace std;

int main(){

    string firstName, lastName;
    cin >> firstName >> lastName; 

    cout << lastName.substr(0, 1) << ". " << firstName.substr(0, 1) << "." << endl;
    cout << lastName[0] << ". " << firstName[0] << "." << endl;

    return 0; 
}