#include <iostream>

int main() {
 std::cout<< "Escribe tres números"<<"\n";
 int a(0);
 int b(0);
 int c(0);
 std::cin>>a>>b>>c;
 if(a > b && a > c){
   std::cout<<"\n"<<a<<" es el número más grande";
 }
 else{
   if(b > c){
     std::cout<<"\n"<<b<<" es el número más grande";
   }
   else{
     std::cout<<"\n"<<c<<" es el número más grande";
   }
 }
} 