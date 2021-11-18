#include <iostream>

using namespace std;

int main() {
 int cont;
 int aux;
 string f{"Tres tristes tigres tragan trigo en un trigal"};
 for(int i{1}; i < f.size(); i++ ){
   int b = f.find ("tri",i-1);
   int a = f.find ("tri",i);
   if(!(a == 1) && !(a == b)){
     cont++;
   }
  }
  cout<<cont; 
} 