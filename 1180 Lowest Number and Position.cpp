#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[1000],n,p;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    int lowest=x[0];
    for(int i=0; i<n; i++)
    {
        if(x[i]<lowest){
            lowest=x[i];
            p=i;}

    }
    cout<<"Menor valor: "<<lowest<<endl;
    cout<<"Posicao: "<<p<<endl;

}
