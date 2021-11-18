#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
 srand(time(NULL));
 int num=rand()%4+2;
 vector <int>a;
 vector <int>b;
 vector <int>c;
 vector <int>d;
 vector <int>e;
 //Creando las matrices ale
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
 //Poniendolas por pantalla
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
 vector <int>maximo;
 //Calculamos maximos
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
     cout<<"{"<<x<<" "<<y<<"}"<<"\n";
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
     cout<<"{"<<x<<" "<<y<<" "<<z<<"}"<<"\n";
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
     cout<<"{"<<x<<" "<<y<<" "<<z<<" "<<u<<"}"<<"\n";
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
     cout<<"{"<<x<<" "<<y<<" "<<z<<" "<<u<<" "<<p<<"}"<<"\n";
     }
}