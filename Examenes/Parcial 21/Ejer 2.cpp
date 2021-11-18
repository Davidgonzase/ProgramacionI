#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string f{""};
    vector<string>p;
    cout<<"Introduce una frase :";
    getline(cin,f);
    p.resize(1);
    int pos(0);
    int t(1);
    pos=f.find(" ");
    p.at(0)=f.substr(0,pos);
    int cont(1);
    while(pos!=-1){
        int pos2;
        cont++;
        pos2= f.find(" ",pos+1);
        p.resize(t+1);
        string a;
        a=f.substr(pos,pos2-pos);
        p.at(t)=a;
        if(pos2==-1){
            pos2=f.size();
        }
        t++;
        pos=f.find(" ",pos+1);
        if(pos2==f.size()){
            pos=-1;
        }
    }
    string aux=p.at(0);
    string aux2=p.at(0);
    string menos;menos=aux;
    string mas;mas=aux;
    string cond;cond=" ";
    for(int i(0);i<p.size();i++){
        string pal=p.at(i);
        string cond2;cond2=p.at(0);
        if(cond2==cond){
            pal=pal.substr(1,pal.size());
        }
        if(pal.size()<aux.size()){
            menos=pal;
            aux=pal;
        }
        if(pal.size()>aux2.size()){
            mas=pal;
            aux2=pal;
        }
    }
    int re(0);string b{" "};
    for(int i(0);i<f.size();i++){
        string c;c=f.at(i);
        if(c==b){
            re++;
        }
    }
    cout<<"la palabra mas larga es "<<mas<<endl;
    cout<<"la palabra mas corta es "<<menos<<endl;
    cout<<"hay "<<cont<<" palabras"<<endl;
    cout<<"hay "<<f.size()-re<<" letras"<<endl;
}
