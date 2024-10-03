#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,n[10];
    cin>>v;
    if(v<50)
    {
        for(int j=v,i=0; i<10; i++)
        {
            n[i]=j;
            cout<<"N["<<i<<"] = "<<n[i]<<endl;
            j=j*2;
        }
    }
}
