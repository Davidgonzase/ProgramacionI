#include <iostream>
#include <vector>


using namespace std;

int main(){
    int menu(0);
    vector<vector<int>>a={{0,0,0},{0,0,0}};
    vector<vector<int>>b={{0,0,0},{0,0,0}};
    while(menu!=1){
        cout<<"1. Salir del programa\n2. Introducir matrices\n3. Sumar dos matrices y mostrar el resultado\n4. Restar dos matrices y mostrar el resultado\n5. Imprimir las 2 matrices\nIntrocuce el comando: ";
        cin>>menu;
        while(menu>5||menu<0){
            cout<<"Comando no valido: ";
            cin>>menu;
        }
        cout<<endl;
        if(menu==2){
            cout<<endl<<"De que dimension son las matrices (1 numero): ";
            int d;cin>>d;
            a.resize(d);b.resize(d);
            for(int i(0);i<a.size();i++){
                a.at(i).resize(d);
                b.at(i).resize(d);
            }
            cout<<"1 Matriz"<<endl;
            for(int i(0);i<a.size();i++){
                cout<<i+1<<" fila"<<endl;
                for(int j(0);j<a.at(i).size();j++){
                    cout<<j+1<<" numero: ";
                    int aux;cin>>aux;
                    a.at(i).at(j)=aux;
                }
            }
            cout<<endl<<"2 Matriz"<<endl;
            for(int i(0);i<b.size();i++){
                cout<<i+1<<" fila"<<endl;
                for(int j(0);j<b.at(i).size();j++){
                    cout<<j+1<<" numero: ";
                    int aux;cin>>aux;
                    b.at(i).at(j)=aux;
                }
            }
        }
        if(menu==3){
            vector<vector<int>>s;
            s.resize(a.size());
            for(int i(0);i<a.size();i++){
                s.at(i).resize(a.size());
            }
            for(int i(0);i<s.size();i++){
                for(int j(0);j<s.at(i).size();j++){
                    s.at(i).at(j)=a.at(i).at(j)+b.at(i).at(j);
                }
            }
            for(int i(0);i<s.size();i++){
                cout<<"{";
                for(int j(0);j<s.at(i).size();j++){
                    cout<<s.at(i).at(j);
                    if(j!=s.size()-1){cout<<",";}
                }
                cout<<"}";
                cout<<endl;
            }
        }
        if(menu==4){
            vector<vector<int>>r;
            r.resize(a.size());
            for(int i(0);i<a.size();i++){
                r.at(i).resize(a.size());
            }
            for(int i(0);i<r.size();i++){
                for(int j(0);j<r.at(i).size();j++){
                    r.at(i).at(j)=a.at(i).at(j)-b.at(i).at(j);
                }
            }
            for(int i(0);i<r.size();i++){
                cout<<"{";
                for(int j(0);j<r.at(i).size();j++){
                    cout<<r.at(i).at(j);
                    if(j!=r.size()-1){cout<<",";}
                }
                cout<<"}";
                cout<<endl;
            }
        }
        if(menu==5){
            cout<<endl;
            for(int i(0);i<a.size();i++){
                cout<<"{";
                for(int j(0);j<a.at(i).size();j++){
                    cout<<a.at(i).at(j);
                    if(j!=a.size()-1){cout<<",";}
                }
                cout<<"}";
                cout<<endl;
            }
            cout<<endl;
            for(int i(0);i<b.size();i++){
                cout<<"{";
                for(int j(0);j<b.at(i).size();j++){
                    cout<<b.at(i).at(j);
                    if(j!=b.size()-1){cout<<",";}
                }
                cout<<"}";
                cout<<endl;
            }
        cout<<endl;
        }
        cout<<endl;
    }
    cout<<"A bueno adios master\n";
    return 0;
}
