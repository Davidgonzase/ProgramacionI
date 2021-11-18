#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a,b,c;
  int menor;
  int mayor;
  int i=1;
  int mul;
  vector<int> v;

  cout<<"Introduce un valor para 'a': ";
  cin>>a;
  cout<<"\nIntroduce un valor para 'b': ";
  cin>>b;
  cout<<"\nIntroduce un valor para 'c': ";
  cin>>c;
  mul=c;
  cout<<"Todos los números múltiplos de "<< c<<" que hay entre a y b son: ";
    if(a<b){
    menor=a;
    mayor=b;
    }
   else{
    menor=b;
    mayor=a;
   }
  while(mul<=mayor){
    mul=c*i;
    if(mul<=mayor && menor<=mul){
      v.push_back(mul);
    }
    i++;
  }
  for(i=0;i<v.size();i++)
    cout<<v.at(i)<<"-";
  cout<<"\n";
}