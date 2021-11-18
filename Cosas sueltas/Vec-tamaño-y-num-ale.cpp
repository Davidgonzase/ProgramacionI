#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    //Iniciamos el coso este del aleatorio
    srand(time(NULL));
    //Numero aleatorio de numeros
    int n;n=rand()%5;
    vector<int>a;
    //Asignar numeros random a todos los numeros
    for(int i(0);i<n;i++){
        int aux;aux=rand()%101;
        a.push_back(aux);
        cout<<aux<<",";
    }
    //Ayuda me tienen encerrado en un sotano
}
