#include <iostream>
using namespace std;
int main() 
{
    cout<<"Введите координаты точек"<<endl;
    int a,b,c,ac,bc,sum;
    cin>>a>>b>>c;
    if (a>c) {
        ac=a-c;
    }
    else {ac=c-a;}
    if (c>b) {
        bc=c-b;
    }
    else {bc=c-b;}
    sum=ac+bc;
    cout<<"AC="<<ac<<", BC="<<bc<<", SUMMA="<<sum<<endl;
    return 0;
}
