#include <iostream>
using namespace std;
int main() 
{
    cout<<"Vvedite tochki"<<endl;
    int a,ac,bc,b,c,pr;
    cin>>a>>b>>c;
    if (((c>a)&&(c>b))||((c<a)&&(c<b))){
        cout<<"ERROR"<<endl;}
    else {
        if (c>a){
        ac=c-a;
        bc=b-c;
    }
    else {
        ac=a-c;
        bc=c-b;
    }
    pr=ac*bc;
    cout<<"Proizvedenie="<<pr<<endl;
    }
}
