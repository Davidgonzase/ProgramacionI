#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

int main()
{
    vector<vector<int>> a{ {0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0} };
    bool f(false);
    bool p1(false);
    bool p2(false);
    while(f==false){
        int ccero(0);
        int pp1(0);
        int pp2(0);
        for(int i(0);i<a.size();i++){
            for(int j(0);j<a.at(i).size();j++){
            cout<<a.at(i).at(j)<<" ";
            }
        cout<< endl;
        }
        cout<<"\nJugador 1 que columna quieres?\n";
        cin>>pp1;
        cout<<"\n";
        while(a.at(0).at(pp1)){
            cout<<"\nColumna rellena, introduce otra\n";
            cin>>pp1;
            cout<<"\n";
        }
        int cont(0);
        for(int i(4);i>-1;i--){
            if(cont==0){
                if(a.at(i).at(pp1)==0){
                    a.at(i).at(pp1)=1;
                    cont++;
                }
            }
        }
        for(int i(0);i<a.size();i++){
            if((a.at(i).at(0)==1&&a.at(i).at(1)==1&&a.at(i).at(2)==1&&a.at(i).at(3)==1)||(a.at(i).at(1)==1&&a.at(i).at(2)==1&&a.at(i).at(3)==1&&a.at(i).at(4)==1)){
                p1=true;
            }
        }
        for(int j(0);j<a.size();j++){
            for(int i(0);i<2;i++){
                if((a[i][j]==1&&a[i+1][j]==1&&a[i+2][j]==1&&a[i+3][j]==1)){
                    p1=true;
                }
            }
        }
        for(int i(4);i>2;i--){

        }
        for(int i(0);i<a.size();i++){
            for(int j(0);j<a[i].size();j++){
            cout<<a[i][j]<<" ";
            }
        cout<< endl;
        }
        if(p1==true){
            cout<<"\nP1 WINS\n\n";
            return 0;
        }
        for(int i(0);i<a.size();i++){
            for(int j(0);j<a[i].size();j++){
             if(a[i][j]==0){
                ccero++;
              }
             }
            }
        if(ccero==0){
           f=true;
        }
        if(ccero!=0){
                cout<<"\nJugador 2 que columna quieres?\n";
                cin>>pp2;
                cout<<"\n";
                while(a.at(0).at(pp2)){
                    cout<<"\nColumna rellena, introduce otra\n";
                    cin>>pp2;
                    cout<<"\n";
                }
        }
        int cont2(0);
        for(int i(4);i>-1;i--){
            if(cont2==0){
                if(a[i][pp2]==0){
                    a[i][pp2]=2;
                    cont2++;
                }
            }
        }
        for(int i(0);i<a.size();i++){
            for(int i(0);i<a.size();i++){
                if((a[i][0]==2&&a[i][1]==2&&a[i][2]==2&&a[i][3]==2)||(a[i][1]==2&&a[i][2]==2&&a[i][3]==2&&a[i][4]==2)){
                    p2=true;
                }
            }
        }
        for(int j(0);j<a.size();j++){
            for(int i(0);i<2;i++){
                if((a[i][j]==2&&a[i+1][j]==2&&a[i+2][j]==2&&a[i+3][j]==2)){
                    p2=true;
                }
            }
        }
        if(p2==true){
            cout<<"\n\nP2 WINS\n\n";
            for(int i(0);i<a.size();i++){
                for(int j(0);j<a[i].size();j++){
                cout<<a[i][j]<<" ";
                }
            cout<< endl;
            }
            return 0;
        }
    }
    cout<<"\n\nEmpate,todas las posiciones han sido rellenadas\n\n";
    return 0;
}
