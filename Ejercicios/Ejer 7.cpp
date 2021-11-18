#include <iostream>

int main() {
 std::cout<< "Escribe dos números"<<"\n";
 int a(0);
 int b(0);
 std::cin>>a>>b;
 if(a > b){
   std::cout<<"\n"<<a <<" es el número más grande";
 }
 else{
   std::cout<<"\n"<<b<<" es el número más grande";
 }
} 