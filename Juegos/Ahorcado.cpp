#include <iostream>
#include <array>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
    srand(time(NULL));
    string a(" _____""\n""|    |" "\n""|""\n""|""\n""|""\n");
    int v(6);
    array<string,7> vidas;
    vidas.at(0)= " ______""\n""|     |" "\n""|   (x_x)""\n""|    /|\\""\n""|    / \\""\n";
    vidas.at(1)= " ______""\n""|     |" "\n""|   (._.)""\n""|    /|\\""\n""|    / ""\n";
    vidas.at(2)= " ______""\n""|     |" "\n""|   (._.)""\n""|    /|\\""\n""|    ""\n";
    vidas.at(3)= " ______""\n""|     |" "\n""|   (._.)""\n""|     |\\""\n""|    ""\n";
    vidas.at(4)= " ______""\n""|     |" "\n""|   (._.)""\n""|     |""\n""|    ""\n";
    vidas.at(5)= " ______""\n""|     |" "\n""|   (._.)""\n""|    ""\n""|    ""\n";
    vidas.at(6)= " ______""\n""|     |" "\n""|   ""\n""|    ""\n""|    ""\n";
    string final("    (^o^)""\n""     -|-""\n""     / \\""\n");

    vector<string> palabras = {"ninfa", "dinosaurio", "pizarra", "ordenador", "patrulla", "altavoz", "braga", "metro", "coche", "lampara", "suicidio", "edificio"};
    string p=palabras.at(rand()%palabras.size());
    vector<string> po;
    vector<string> pr;pr.resize(1);
    for(int i(0);i<p.size();i++){
        po.resize(i+1);
        po.at(i)= "-";
    }
    int cont(1);
    while(v>=0){
        if(cont!=0){
            cout<<vidas.at(v);
        }
        else{
            cout<<"\n\n"<<final;
        }
        if(v==0){
            cout<<"\n\n GAME OVER \n\n ";
            cout<<p<<"\n\n";
            return 0;
        }
        cout<<"\n\n";
        for(int i(0);i<po.size();i++){
            cout<<po.at(i);
        }
        if(cont==0){
            cout<<"\n";
            return 0;
        }
        cout<<"\n\n";
        cout<<"Intenta adivinar una letra : ";
        char l; cin>>l;
        for(int i(0);i<pr.size();i++){
            pr.resize(i+1);
            pr.at(i)=l;
        }
        bool f;f=false;
        for(int i(0);i<pr.size();i++){
            char g{};
            pr.at(i)=g;
            if(g==l){
              f=true;
            }
        }
        if(f==true){
            v--;
            cout<<"Ya has usado esa letra!! \n";
        }
        int pos=p.find(l);
        if(pos == -1){
            v--;
        }
        else{
            for(int i(0);i<p.size();i++){
                if(p.at(i)==l){
                    po.at(i)=l;
                }
            }
            cont=0;
            for(int i(0);i<po.size();i++){
                if(po.at(i)=="-"){
                    cont++;
                }
            }
            if(cont==0){
                cout<< "\n\n  -YOU WIN- ";
            }

        }
    }

}
