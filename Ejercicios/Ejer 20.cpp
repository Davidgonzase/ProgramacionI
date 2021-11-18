#include <iostream>
#include <array>

using namespace std;

int main() {
 array<int,9> a{2,7,8,9,4,7,9,1,7};

 for(int i{0}; i<a.size(); i++){
   if(a.at(i) == 7){cout<<i<<"-";}
 }
} 