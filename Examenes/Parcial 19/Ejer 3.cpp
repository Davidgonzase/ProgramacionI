#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> a;
    for(float i(3.00);i<6.01;i+=0.01){
        float y;
        y=(i*i)+(2*i);
        a.push_back(y);
    }
    float r;
    for(int i(0);i<a.size();i++){
        float q=0.01*a.at(i);
        r+=q;
    }
    cout<<"El valor del area de la integral es "<<r<<"m2"<<endl;
}

