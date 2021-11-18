#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<string>>a;a={{"+","+","+"},{"+","+","+"},{"+","+","+"}};
    int c(0);
    while(c==0){
        int ccero(0);
        int pp1;int pp11;
        int pp2;int pp22;
        int ca(0);int cb(0);
        for(int i(0);i<a.size();i++){
            for(int j(0);j<a.size();j++){
                cout<<a.at(i).at(j)<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"\nJugador 1 que fila y columna quieres?\n";
        cin>>pp1;pp1--;
        cout<<"\n";
        cin>>pp11;pp11--;
        cout<<"\n";
        while(a.at(pp1).at(pp11)=="X"||a.at(pp1).at(pp11)=="O"){
                cout<<"\nJugador 1 esta fila y columna estan llenas, en que posicion quieres?\n";
                cin>>pp1;
                pp1--;
                cout<<"\n";
                cin>>pp11;
                pp11--;
        }
        if(a.at(pp1).at(pp11)=="+"){
            a.at(pp1).at(pp11)="X";
        }
        for(int i(0);i<a.size();i++){
            if(a.at(i).at(0)=="X"&&a.at(i).at(1)=="X"&&a.at(i).at(2)=="X"){
                ca++;
            }
            if(a.at(0).at(i)=="X"&&a.at(1).at(i)=="X"&&a.at(2).at(i)=="X"){
                ca++;
            }
        }
        if((a.at(0).at(0)=="X"&&a.at(1).at(1)=="X"&&a.at(2).at(2)=="X")||(a.at(0).at(2)=="X"&&a.at(1).at(1)=="X"&&a.at(2).at(0)=="X")){
            ca++;
        }
        if(ca==1){
            cout<<"\nP1 WINS\n";
            for(int i(0);i<a.size();i++){
                for(int j(0);j<a.size();j++){
                    cout<<a.at(i).at(j)<<"  ";
                }
                cout<<endl;
            }
            return 0;
        }
        for(int i(0);i<a.size();i++){
            for(int j(0);j<a.size();j++){
                cout<<a.at(i).at(j)<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
        for(int i(0);i<a.size();i++){
            for(int j(0);j<a.size();j++){
                if(a.at(i).at(j)=="+"){
                    ccero++;
                }
                }
            }
        if(ccero==0){
            c++;
        }
        if(ccero!=0){
            cout<<"\nJugador 2 que fila y columna quieres?\n";
            cin>>pp2;pp2--;
            cout<<"\n";
            cin>>pp22;pp22--;
            cout<<"\n";
            while(a.at(pp2).at(pp22)=="X"||a.at(pp2).at(pp22)=="O"){
                cout<<"\nJugador 2 esta fila y columna estan llenas, en que posicion quieres?\n";
                cin>>pp2;
                pp2--;
                cout<<"\n";
                cin>>pp22;
                pp22--;
            }
        }
        if(a.at(pp2).at(pp22)=="+"){
            a.at(pp2).at(pp22)="O";
        }
        for(int i(0);i<a.size();i++){
            if(a.at(i).at(0)=="O"&&a.at(i).at(1)=="O"&&a.at(i).at(2)=="O"){
                cb++;
            }
            if(a.at(0).at(i)=="O"&&a.at(1).at(i)=="O"&&a.at(2).at(i)=="O"){
                cb++;
            }
        }
        if((a.at(0).at(0)=="O"&&a.at(1).at(1)=="O"&&a.at(2).at(2)=="O")||(a.at(0).at(2)=="O"&&a.at(1).at(1)=="O"&&a.at(2).at(0)=="O")){
            cb++;
        }
        if(cb==1){
            cout<<"\nP2 WINS\n";
            for(int i(0);i<a.size();i++){
                for(int j(0);j<a.size();j++){
                    cout<<a.at(i).at(j)<<"  ";
                }
                cout<<endl;
            }
            return 0;
        }
        }
    cout<<"\n Empate\n";
    return 0;
}
