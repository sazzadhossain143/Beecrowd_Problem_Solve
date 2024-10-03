#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            sum=sum+1;
            cout<<sum<<" ";
            if(j==3)cout<<"PUM";

        }
        sum++;
        cout<<endl;
    }
}
