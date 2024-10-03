#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,n,total=0,sum1=0,sum2=0,sum3=0;
    char C,R,S,ch;
    cin>>N;

    for(int i=1; i<=N; i++)
    {
        cin>>n>>ch;
        total=total+n;
        if(ch=='C')sum1=sum1+n;
        else if(ch=='R')sum2=sum2+n;
        else if(ch=='S')sum3=sum3+n;

    }
    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<sum1<<endl;
    cout<<"Total de ratos: "<<sum2<<endl;
    cout<<"Total de sapos: "<<sum3<<endl;

    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(float)(sum1*100)/total<<" %"<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(float)(sum2*100)/total<<" %"<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(float)(sum3*100)/total<<" %"<<endl;
}
