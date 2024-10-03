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
    if(ch=='S')
    {
        float sum=0;
        for(i=0; i<12; i++)
        {
            sum=sum+m[i][l];
        }
    }
    else if(ch=='M')
    {
        float sum=0,avg;
        for(i=0; i<12; i++)
        {
            sum=sum+m[i][l];
        }
        avg=sum/12;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

}
