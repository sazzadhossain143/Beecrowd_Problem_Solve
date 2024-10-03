#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;

    while(1)
    {
        cin>>M>>N;
        if(M<=0 || N<=0)
        {
            break;
        }
        else if(M>N)
        {
            int i,sum=0;
            for(int i=N; i<=M; i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<" Sum="<<sum<<endl;
        }
        else if(M<N)
        {
            int i,sum=0;
            for(int i=M; i<=N; i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<" Sum="<<sum<<endl;
        }
    }
}
