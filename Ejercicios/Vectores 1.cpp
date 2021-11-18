#include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main()
{
    srand(time(NULL));
    int num=rand()%10+1;
    vector<vector<int>> v(num);
    for(int i(0); i < v.size();i++){
     int a=rand()%10+1;
     vector<int> aux(a);
     v.at(i) = aux;
    }

    return 0;
}
