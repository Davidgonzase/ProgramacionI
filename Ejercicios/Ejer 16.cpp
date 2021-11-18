#include <iostream>

using namespace std;

int main() {
 string f("");
 cout<<"Introduce un texto: ";
 getline(cin,f);
 int cont(0);
 for(int i; i<f.size(); i++){
   if(f.at(i) == 'a'){ 
     cont++;    
  }
 }
 cout<<cont;
} 
