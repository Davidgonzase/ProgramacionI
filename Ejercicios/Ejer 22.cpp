#include <iostream>
#include <array>

using namespace std;

int main() {
  float suma(0);
  int aux(0);
  array <int,10> a{1,5,4,2,8,6,3,7,8,1};
  for(int i{0};i<a.size(); i++){
   aux=a.at(i);
   suma+=aux;
  }
  suma=suma/10;
  cout<<suma;
} 