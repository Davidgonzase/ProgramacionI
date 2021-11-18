#include <iostream>

using namespace std;

int main() {
 int a;
 cout<<"Escribe un número del 0 al 10 : ";
 cin>>a;
 bool b (false);
 while (b == false){
  if(a>10 || a<0){
   cout<<"Escribe un número del 0 al 10 : ";
   cin>>a;
  }
  else{
   cout<<"\n"<<a;
   b=true;
  }
 }
} 