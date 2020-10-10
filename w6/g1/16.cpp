// inserting into a string
#include <iostream>
#include <string>

using namespace std;

int main (){

  string str  = "test";

  str.insert(1,"hi");

  cout << str << endl;

  str.insert(1,0,':');

  cout << str << endl;

  return 0;
}