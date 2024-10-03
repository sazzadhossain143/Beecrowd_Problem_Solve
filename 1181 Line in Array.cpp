#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    char ch;
    cin>>l;
    cin>>ch;

    float m[12][12];
    int i,j;
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>m[i][j];
        }
    }
    float sum=0,avg;
    if(ch=='S')
    {
        for(j=0; j<12; j++)
        {
            sum=sum+m[l][j];
        }
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else if(ch=='M')
    {
        for(j=0; j<12; j++)
        {
            sum=sum+m[l][j];
        }
        avg=sum/12;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }


}
