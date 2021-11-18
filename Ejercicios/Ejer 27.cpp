#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
 int c(0);
 int d(0);
 vector <int>pos2;
 string a("guardar");
 vector<string> f = {"perro","avion","guardar","teclado","sexo","guardar","gay","altavoces","mando","guardar","grafica"};
 vector<string> final;
 for(int i(0); i<f.size();i++){
     if(f.at(i) == a){
         pos2.resize(c+1);
         pos2.at(c)=i;
         c+=1;
      }
     }
 for(int i(0);i<pos2.size();i++){
  int b = pos2.at(i)+1;
  final.resize(d+1);
  final.at(d)=f.at(b);
  d+=1;
    }
 for(int i(0);i<final.size();i++){
     cout<<final.at(i)<<"-";
 }
 cout<<"\n";
}