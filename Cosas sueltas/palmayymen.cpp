#include <iostream>
#include <vector>
#include <string>



using namespace std;

int main()
{
    vector<string> p;
    int v(0);
    cout<<"Cuantas palabras quieres introducir: ";
    cin>>v;
    while(v==1){
        cout<<"\nNo puede ser una palabra, introduce cuantas palabras quieres poner: ";
        cin>>v;
    }
    for(int i(0);i<v;i++){
        cout<<"\nIntroduce una palabra: ";
        p.resize(i+1);
        cin>>p.at(i);
    }
    string aux;
    string pma;
    string pme; pme=p.at(0);
    for(int i(0);i<p.size();i++){
        aux=p.at(i);
        if(pma.size()<aux.size()){
            pma=aux;
        }
        if(pme.size()>aux.size()){
            pme=aux;
        }
    }
    cout<<"\nLa palabra mayor: "<<pma<<"\n";
    cout<<"\nLa palabra menor: "<<pme<<"\n\n";
}
