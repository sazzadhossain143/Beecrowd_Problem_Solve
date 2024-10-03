#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],i;

    for(i=0; i<100; i++)
    {
        cin>>ar[i];
    }
    int p, mx=ar[0];
    for(i=1; i<100; i++)
    {
        if(mx<ar[i])
           {
              mx=ar[i];
              p=i+1;
           }
    }
    cout<<mx<<endl;
    cout<<p<<endl;

}
