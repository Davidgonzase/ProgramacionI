#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));
    int pun1(0);
    int pun2(0);
    int na;
    string e{"si"};
    string es{"si"};
    bool f(false);
    cout<<"Introduce 'si' o 'no' qieres seguir jugando";
    while(!f){
        if(e=="si"){
            cout<<endl<<"Jugador 1? ";
            cin>>e;
            if(e=="si"){
                int num=rand()%10+1;
                na=num;
                pun1+=num;
            }
        }
        cout<<endl<<"Los puntos del J1 son: "<<pun1<<endl;
        if(es=="si"){
            cout<<endl<<"Jugador 2? ";
            cin>>es;
            if(es=="si"){
                int num=rand()%10+1;
                if(e=="no"){
                    while(num==na){
                        num=rand()%10+1;
                    }
                }
                pun2+=num;
            }
        }
        cout<<endl<<"Los puntos del J2 son: "<<pun2<<endl<<"---------------"<<endl;
        if(e=="no"&&es=="no"){
            f=1;
        }
    }
    int aux1;
    int aux2;
    if(pun1>15){
        aux1=pun1-15;
    }else{aux1=15-pun1;}
    if(pun2>15){
        aux2=pun2-15;
    }else{aux2=15-pun2;}
    if(aux1==aux2){
        cout<<"Empate"<<endl;
        return 0;
    }
    if(aux1<aux2){
        cout<<"J1 gana"<<endl;
        return 0;
    }else{
        cout<<"J2 gana"<<endl;
        return 0;
    }
}
