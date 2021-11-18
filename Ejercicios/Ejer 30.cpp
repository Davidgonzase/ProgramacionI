#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Introduce un numero: " << endl;
    int n(0);
    cin>>n;
    int cont(0);
    int aux(0);
    vector<int>d;
    d.resize(0);
    while(cont==0){
        int divisor=n/2;
        while(divisor > 1){
          if (n % divisor == 0){
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
        cout<<d.at(i)<<";";
    }
}
