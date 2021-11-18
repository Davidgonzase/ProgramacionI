#include <iostream>

int main() {
 int a;
 int b;
 std::cout<<"Escribe un número:";
 std::cin>>a;
 b=a;
 for(int i{0}; i<4; i++ ){
   a = a * b;
 }
 std::cout<<a;
} 