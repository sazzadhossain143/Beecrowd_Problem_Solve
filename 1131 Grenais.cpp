#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,sum1=0,sum2=0,sum3=0,coun=0;
    while(1)
    {
        cin>>a>>b;
        coun++;
        if(a>b)sum1++;
        if(a<b)sum2++;
        if(a==b)sum3++;

        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>c;
        if(c==2)break;

    }
    cout<<coun<<" grenais"<<endl;
    cout<<"Inter:"<<sum1<<endl;
    cout<<"Gremio:"<<sum2<<endl;
    cout<<"Empates:"<<sum3<<endl;
    cout<<"Inter venceu mais"<<endl;
}
