#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    cout<<"Vvedite tochki"<<endl;
    int x1,x2,y1,y2,x,y,s,p;
    cin>>x1>>y1>>x2>>y2;
    x=abs(x1-x2);
    y=abs(y1-y2);
    s=x*y;
    p=(x+y)*2;
    cout<<"P="<<p<<", S="<<s<<endl;
}
