#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v,n[1000],j=0;
    cin>>v;
    if(v>=2 && v<=50)
    {
        for(int i=0; i<1000; i++)
        {
            if(j==v){j=0;}

            cout<<"N["<<i<<"] = "<<j<<endl;
            j++;


        }
    }
}

