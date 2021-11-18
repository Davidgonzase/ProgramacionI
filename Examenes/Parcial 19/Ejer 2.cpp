#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"Introduce una palabra: ";
    string a;cin>>a;
    string b;b=a;
    for(int i(0);i<a.size()/2;i++){
        char aux;aux=a.at(i);
        a.at(i)=a.at(a.size()-1-i);
        a.at(a.size()-1-i)=aux;
    }
    cout<<endl<<a<<endl;
    int cont(0);
    for(int i(0);i<a.size();i++){
        if(a.at(i)==b.at(i)){
            cont++;
        }
        if(cont==a.size()){
            cout<<endl<<"La palabra "<<a<<" es palindroma"<<endl;
        }
    }
}
