#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    while(1)
    {
        int sum=0;
        cin>>x;
        int coun=0,i=x;
        while(coun<5)
        {
            if(i%2==0)
            {
                sum=sum+i;
                i=i+2;
                coun++;
            }
            else i++;
        }
        if(x==0)break;
        cout<<sum<<endl;
    }
}
