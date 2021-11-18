#include <iostream>
#include <vector>


using namespace std;

int main()
{
    vector<int>p;
    int d(0);
    cout<<"Cuantos numeros quieres poner: ";
    cin>>d;
    p.resize(d);
    for(int i(0);i<p.size();i++){
        cout<<"\nIntroduce un numero: ";
        int aux(0);
        cin>>aux;
        p.at(i)=aux;
    }
    vector<int>pp;
    int aux2(0);
    cout<<"\n";
    for(int elem : p){
        if(elem%2==0){
            pp.resize(aux2+1);
            pp.at(aux2)=elem;
            aux2++;
            cout<<elem<<",";
        }
    }
}
