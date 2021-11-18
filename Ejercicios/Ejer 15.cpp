#include <iostream>

using namespace std;

int main() {
  string f("");
  cout<<"Cual es tu password: ";
  getline(cin,f);
  int a = f.find("password"); 
  string b = f.substr(a+8,f.size());
  cout<<b;
} 