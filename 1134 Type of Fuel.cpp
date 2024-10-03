#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,g=0,s=0;
    while(1)
    {
        cin>>n;
        if(n==1)a++;
        if(n==2)g++;
        if(n==3)s++;
        if(n==4)break;
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<s<<endl;

}
