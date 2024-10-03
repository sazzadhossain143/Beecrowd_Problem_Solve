#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,z;
    cin>>x>>z;
        while(z<=x)
        {
            cin>>z;
        }
        int i, sum=0,coun=0;
        i=x;
        while(sum<z)

            {
                sum=sum+i;
                coun++;
                i++;

            }
            cout<<coun;
            cout<<endl;
}
