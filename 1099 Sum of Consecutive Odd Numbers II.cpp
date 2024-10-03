#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,Y,i;
    cin>>N;
    for(i=1; i<=N; i++)
    {   int sum=0,coun=0;
        cin>>X>>Y;
        if(X>Y)
        {
            for(int j=Y+1; j<X; j++)
            {
                if(j%2!=0)
                {
                    sum=sum+j;
                }
            }
            cout<<sum<<endl;
        }
        else if(X<Y)
        {
            for(int k=X+1; k<Y; k++)
            {
                if(k%2!=0)
                {
                    sum=sum+k;
                }
            }
            cout<<sum<<endl;
        }
        if(X==Y )cout<<"0"<<endl;
    }

}
