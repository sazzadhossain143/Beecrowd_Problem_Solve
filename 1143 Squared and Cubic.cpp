#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N>1 && N<1000)
    {
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=3; j++)
            {
                if(j==1)
                {
                    cout<<i<<" ";
                }
                else if(j==2)
                {
                    cout<<i*i<<" ";
                }

                else if(j==3)
                {
                    cout<<i*i*i;
                }
            }
            cout<<endl;
        }
    }
}
