#include <iostream>
#include <array>
#include <set>
#include <vector>
using namespace std;

int main()
{
    set<string>f;
    for(int i(0);i<10;i++){
        cout<<"Introduce una palabra: ";
        string aux;cin>>aux;
        f.insert(aux);
    }
    vector<string>ff;
    for(string elem:f){
        ff.push_back(elem);
    }
    for(int i(ff.size()-1);i>=0;i--){
        cout<<ff.at(i)<<",";
    }
    cout<<endl;
}
