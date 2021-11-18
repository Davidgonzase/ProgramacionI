#include <iostream>

using namespace std;

int main() {
  string f("En un lugar de la Mancha, de cuyo nombre no quiero acordarme");
  int a=f.find("Mancha");
  string texto1("");
  string texto2("");
  texto1=f.substr(0,a);
  texto2=f.substr(a+6,f.size());
  cout<<texto1<<"-"<<texto2;
} 