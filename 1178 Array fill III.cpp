#include<bits/stdc++.h>
using namespace std;

int main()
{
    double v,n[100],coun=0;
    cin>>v;

    double j=v;
        for(int i=0; i<100; i++)
        {
            n[i]=j;
            cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<n[i]<<endl;
            j=j/2;
        }

}

