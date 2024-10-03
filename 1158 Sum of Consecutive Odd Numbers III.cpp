#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n;
    cin>>n;
    for(int j=1; j<=n; j++)
    {
        int sum=0;
        cin>>x>>y;

        int coun=0,i=x;
        while(coun<y)
        {
            if(i%2!=0)
            {
                sum=sum+i;
                i=i+2;
                coun++;
            }
            else i++;
        }
        //if(coun==0)break;
        cout<<sum<<endl;
    }
}
