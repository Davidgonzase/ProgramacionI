#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout <<"Introduce un numero: ";
    int a;cin>>a;
    int divisor;divisor=a/2;
    int cont(0);
    int aux(0);
    vector<int>d;
    d.resize(0);
    while(cont==0){
        while(divisor > 1){
          if (a % divisor == 0){
            aux++;
            d.resize(aux);
            d.at(aux-1)=divisor;
          }
          divisor--;
        }
        cont++;
    }
    cout<<"\n";
    for(int i(0);i<d.size();i++){
        int b;b=d.at(i);
        int divisor = b/2;
        bool esprimo{true};
        while(divisor > 1){
          if (b % divisor == 0){
            esprimo = false;
          }
          divisor--;
        }
        if(esprimo){
          std::cout<<b<<" , ";
        }
        a++;
    }
}
