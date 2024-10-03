#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,sum=0;
    cin>>x>>y;

    if(x==y)
    {
        cout<<0<<endl;
    }
    if(x<y)
    {
        for(i=x; i<y; i++)
        {
            if(i%2!=0)
            {
                sum=sum+i;
                cout<<sum<<endl;
            }
        }
    }
    if(x>y)
    {
            if((y<0 && x>0)||(y>0 && x<0))
        {
            int sum1=0,sum2=0;
            for(i=0; i>y; i--)
            {
                if(i%2!=0)
                {
                    sum1=sum1+i;
                }
            }
            //cout<<sum<<endl;
            for(i=1; i<x; i++)
            {
                if(i%2!=0)
                {
                    sum2=sum2+i;
                }
            }
            cout<<sum1+sum2<<endl;

        }
        if(y>0 && x>0)
        {
            for(i=y; i<x; i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                    cout<<sum<<endl;
                }
            }
        }
    }

}
