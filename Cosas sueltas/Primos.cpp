#include <iostream>
#include <iostream>

int main() {
 std::cout<<"2 , 3 , ";
  int num{4};
  int cont{1};

 while(cont<=10){
   int divisor = num/2;
   bool esprimo{true};
   while(divisor > 1){
     if (num % divisor == 0){
       esprimo = false;
     }
     divisor--;
   }
   if(esprimo){
     std::cout<<num<<" , ";
     cont++;
   }
   num++;
 }
}
