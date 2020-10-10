// inserting into a string
#include <iostream>
#include <string>

using namespace std;

int main (){

  string str;
  cin >> str;

  str.erase(0, 2);

  cout << str << endl;

  return 0;
}