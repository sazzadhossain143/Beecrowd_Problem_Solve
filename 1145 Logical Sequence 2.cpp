#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    if((x>1 && x<20) && (y>x && y<100000) )
    {
        int i=1;
        while(sum<y)
        {
            for(int j=1; j<=x; j++)
            {
                sum=sum+1;
                cout<<sum;
                if(j==x)break;
                cout<<" ";
            }
            cout<<endl;
            i++;
        }
    }
}
