#include<bits/stdc++.h>
using namespace std;
int main()
{

    char ch;
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
            for(j=0; j<12; j++)
            {
                if(j<i)
                sum=sum+m[i][j];
            }
        }

    }
    else if(ch=='M')
    {
        float sum=0,avg;
        for(i=0; i<12; i++)
        {
            for(j=0; j<12; j++)
            {
                if(j<i)
                sum=sum+m[i][j];
            }
        }
        avg=sum/66;
        cout<<fixed<<setprecision(1)<<avg<<endl;
    }

}
