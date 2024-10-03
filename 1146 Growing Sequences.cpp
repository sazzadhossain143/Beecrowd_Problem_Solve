#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;


        while(1)
        {   int sum=0;
            cin>>x; if(x<=0)break;
            for(int j=1; j<=x; j++)
            {
                sum=sum+1;
                cout<<sum;
                if(j==x)break;
                cout<<" ";
            }
            cout<<endl;

        }
    }

