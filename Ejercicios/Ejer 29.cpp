#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Cuantos numeros de la serie quieres calcular :";
    int a(0);cin>>a;cout<<"\n";
    int num(1);
    int num2(1);
    vector<int>s;
    int aux(1);
    s.resize(aux);
    s.at(aux-1)=num;
    for(int i(0);i<a;i++){
        s.resize(aux+1);
        s.at(aux)=num2;
        aux++;
        int aux2;aux2=num2;
        num2+=num;
        num=aux2;
    }
    for(int i(0);i<s.size();i++){
        cout<<s.at(i)<<",";
    }
    cout<<endl;
}
