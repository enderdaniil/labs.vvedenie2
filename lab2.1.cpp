#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float x1,x2,y1,y2,p;
    cout<<"1 tjcka vvedite"<<endl;
    cin>>x1>>y1;
    x1=abs(x1);
    y1=abs(y1);
    cout<<"2 tjcka vvedite"<<endl;
    cin>>x2>>y2;
    x2=abs(x2);
    y2=abs(y2);
    p=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<"Rassyojanie="<<p<<endl;
    return 0;
}
