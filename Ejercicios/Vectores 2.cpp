#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <set>

using namespace std;

int main(){
 srand(time(NULL));
 vector<int> v;
 for(int i{0}; i<10; i++){
     v.push_back(rand()%11);
 }

 set<int> s;

 for(int elem: v){
     cout<< elem << "-";
     s.insert(elem);
 }

 cout<<"\n";

 for(int elem: s){
     cout<<elem<< "-";
 }
 cout<<"\n";
}
