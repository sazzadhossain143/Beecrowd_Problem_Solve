#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,i,j;
    int sum;

        cin>>x>>n;
        while(n<=0)
        {
            cin>>n;
        }
        sum=0;
        for( i=x, j=1; j<=n; i++,j++)
            {
                sum=sum+i;

            }
            cout<<sum;
            cout<<endl;
    }

