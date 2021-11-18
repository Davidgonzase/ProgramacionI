#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    cout << "Introduce una frase: \n";
    string f;
    vector<string>p;
    p.resize(1);
    getline(cin,f);
    int pos(0);
    int t(1);
    pos=f.find(" ");
    p.at(0)=f.substr(0,pos);
    while(pos!=-1){
        int pos2;
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
    cout<<"\n";
    for(int i(0);i<p.size();i++){
        cout<<p.at(i)<<",";
    }
    cout<<endl;
}
