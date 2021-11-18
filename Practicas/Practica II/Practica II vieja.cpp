#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <set>

using namespace std;

int main(){
 srand(time(NULL));
 int num=rand()%4+2;
 vector <int>a;
 vector <int>b;
 vector <int>c;
 vector <int>d;
 vector <int>e;
 //Creando los vectores ale
 if(num==2){
     int num2=rand()%5+2;
     a.resize(num2);
     for(int i(0);i<a.size();i++){
         int num3=rand()%11;
         a.at(i)=num3;
     }
     int num3=rand()%5+2;
     b.resize(num3);
     for(int i(0);i<b.size();i++){
         int num3=rand()%11;
         b.at(i)=num3;
     }
 }
 if(num==3){
     int num2=rand()%5+2;
     a.resize(num2);
     for(int i(0);i<a.size();i++){
         int num3=rand()%11;
         a.at(i)=num3;
     }
     int num3=rand()%5+2;
     b.resize(num3);
     for(int i(0);i<b.size();i++){
         int num3=rand()%11;
         b.at(i)=num3;
     }
     int num4=rand()%5+2;
     c.resize(num4);
     for(int i(0);i<c.size();i++){
         int num3=rand()%11;
         c.at(i)=num3;
     }
 }
 if(num==4){
     int num2=rand()%5+2;
     a.resize(num2);
     for(int i(0);i<a.size();i++){
         int num3=rand()%11;
         a.at(i)=num3;
     }
     int num3=rand()%5+2;
     b.resize(num3);
     for(int i(0);i<b.size();i++){
         int num3=rand()%11;
         b.at(i)=num3;
     }
     int num4=rand()%5+2;
     c.resize(num4);
     for(int i(0);i<c.size();i++){
         int num3=rand()%11;
         c.at(i)=num3;
     }
     int num5=rand()%5+2;
     d.resize(num5);
     for(int i(0);i<d.size();i++){
         int num3=rand()%11;
         d.at(i)=num3;
     }
 }
 if(num==5){
     int num2=rand()%5+2;
     a.resize(num2);
     for(int i(0);i<a.size();i++){
         int num3=rand()%11;
         a.at(i)=num3;
      }
     int num3=rand()%5+2;
     b.resize(num3);
     for(int i(0);i<b.size();i++){
         int num3=rand()%11;
         b.at(i)=num3;
     }
     int num4=rand()%5+2;
     c.resize(num4);
     for(int i(0);i<c.size();i++){
         int num3=rand()%11;
         c.at(i)=num3;
     }
     int num5=rand()%5+2;
     d.resize(num5);
     for(int i(0);i<d.size();i++){
         int num3=rand()%11;
         d.at(i)=num3;
     }
     int num6=rand()%5+2;
     e.resize(num6);
     for(int i(0);i<e.size();i++){
         int num3=rand()%11;
         e.at(i)=num3;
     }
 }
 cout<<"{ ";
 //Poniendolos por pantalla
 if(num==2){
     cout<<"{";
     for(int i(0);i<a.size();i++){
     cout<<a.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<b.size();i++){
     cout<<b.at(i)<<" ";
     }
     cout<<"}";
 }
 if(num==3){
     cout<<"{";
     for(int i(0);i<a.size();i++){
     cout<<a.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<b.size();i++){
     cout<<b.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<c.size();i++){
     cout<<c.at(i)<<" ";
     }
     cout<<"}";
 }
 if(num==4){
     cout<<"{";
     for(int i(0);i<a.size();i++){
     cout<<a.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<b.size();i++){
     cout<<b.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<c.size();i++){
     cout<<c.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<d.size();i++){
     cout<<d.at(i)<<" ";
     }
     cout<<"}";
 }
 if(num==5){
     cout<<"{";
     for(int i(0);i<a.size();i++){
     cout<<a.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<b.size();i++){
     cout<<b.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<c.size();i++){
     cout<<c.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<d.size();i++){
     cout<<d.at(i)<<" ";
     }
     cout<<"}";
     cout<<"{";
     for(int i(0);i<e.size();i++){
     cout<<e.at(i)<<" ";
     }
     cout<<"}";
 }
 cout<<" }"<<"\n";
 //Vecor maximos
 vector <int>maximo;
 if(num==2){
     int x(0);
     int y(0);
     for(int i(0);i<a.size();i++){
         if(x<a.at(i)){
             x=a.at(i);
         }
     }
     for(int i(0);i<b.size();i++){
         if(y<b.at(i)){
             y=b.at(i);
         }
     }
     maximo.resize(2);
     maximo.at(0)=x;
     maximo.at(1)=y;
     cout<<"{ {";
     for(int i(0);i<maximo.size();i++){
         cout<<maximo.at(i)<<" ";
     }
     cout<<"} }";
     }
 if(num==3){
     int x(0);
     int y(0);
     int z(0);
     for(int i(0);i<a.size();i++){
         if(x<a.at(i)){
             x=a.at(i);
         }
     }
     for(int i(0);i<b.size();i++){
         if(y<b.at(i)){
             y=b.at(i);
         }
     }
     for(int i(0);i<c.size();i++){
         if(z<c.at(i)){
             z=c.at(i);
         }
     }
     maximo.resize(3);
     maximo.at(0)=x;
     maximo.at(1)=y;
     maximo.at(2)=z;
     cout<<"{ {";
      for(int i(0);i<maximo.size();i++){
         cout<<maximo.at(i)<<" ";
         }
     cout<<"} }";
     }
 if(num==4){
     int x(0);
     int y(0);
     int z(0);
     int u(0);
     for(int i(0);i<a.size();i++){
         if(x<a.at(i)){
             x=a.at(i);
         }
     }
     for(int i(0);i<b.size();i++){
         if(y<b.at(i)){
             y=b.at(i);
         }
     }
     for(int i(0);i<c.size();i++){
         if(z<c.at(i)){
             z=c.at(i);
         }
     }
     for(int i(0);i<d.size();i++){
         if(u<d.at(i)){
             u=d.at(i);
         }
     }
     maximo.resize(4);
     maximo.at(0)=x;
     maximo.at(1)=y;
     maximo.at(2)=z;
     maximo.at(3)=u;
     cout<<"{ {";
      for(int i(0);i<maximo.size();i++){
         cout<<maximo.at(i)<<" ";
         }
     cout<<"} }";
     }
 if(num==5){
     int x(0);
     int y(0);
     int z(0);
     int u(0);
     int p(0);
     for(int i(0);i<a.size();i++){
         if(x<a.at(i)){
             x=a.at(i);
         }
     }
     for(int i(0);i<b.size();i++){
         if(y<b.at(i)){
             y=b.at(i);
         }
     }
     for(int i(0);i<c.size();i++){
         if(z<c.at(i)){
             z=c.at(i);
         }
     }
     for(int i(0);i<d.size();i++){
         if(u<d.at(i)){
             u=d.at(i);
         }
     }
     for(int i(0);i<e.size();i++){
         if(p<e.at(i)){
             p=e.at(i);
         }
     }
     maximo.resize(5);
     maximo.at(0)=x;
     maximo.at(1)=y;
     maximo.at(2)=z;
     maximo.at(3)=u;
     maximo.at(4)=p;
     cout<<"{ {";
      for(int i(0);i<maximo.size();i++){
         cout<<maximo.at(i)<<" ";
         }
     cout<<"} }";
     }
 //Ordenar los números
 cout<<"\n";
 set<int> o;
 int div(0);
 int suma(0);
 if(num==2){
     for(int i(0);i<a.size();i++){
         o.insert(a.at(i));
     }
     for(int i(0);i<b.size();i++){
         o.insert(b.at(i));
     }
     for(auto elem: o){
        cout << elem << ", " ;

     }

 }
 if(num==3){
     for(int i(0);i<a.size();i++){
         o.insert(a.at(i));
     }
     for(int i(0);i<b.size();i++){
         o.insert(b.at(i));
     }
     for(int i(0);i<c.size();i++){
         o.insert(c.at(i));
     }
     for(auto elem: o){
        cout << elem << ", " ;

     }

 }
 if(num==4){
     for(int i(0);i<a.size();i++){
         o.insert(a.at(i));
     }
     for(int i(0);i<b.size();i++){
         o.insert(b.at(i));
     }
     for(int i(0);i<c.size();i++){
         o.insert(c.at(i));
     }
     for(int i(0);i<d.size();i++){
         o.insert(d.at(i));
     }
     for(auto elem: o){
        cout << elem << ", " ;

     }

 }
 if(num==5){
     for(int i(0);i<a.size();i++){
         o.insert(a.at(i));
     }
     for(int i(0);i<b.size();i++){
         o.insert(b.at(i));
     }
     for(int i(0);i<c.size();i++){
         o.insert(c.at(i));
     }
     for(int i(0);i<d.size();i++){
         o.insert(d.at(i));
     }
     for(int i(0);i<e.size();i++){
         o.insert(e.at(i));
     }
     for(auto elem: o){
        cout << elem << ", " ;

     }
 }
 cout<<"\n";

}
