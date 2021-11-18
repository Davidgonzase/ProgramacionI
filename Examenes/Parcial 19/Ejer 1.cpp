#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,10>a;
    a.at(0)=0;
    a.at(1)=2;
    a.at(2)=1;
    for(int i(3);i<a.size();i++){
        a.at(i)=a.at(i-1)+a.at(i-2)-a.at(i-3);
    }
    float suma(0);
    for(int elem : a){
        cout<<elem<<"-";
        suma+=elem;
    }
    cout<<"\nLa suma es: "<<suma<<"\nLa media es: "<<suma/10<<endl;
}
