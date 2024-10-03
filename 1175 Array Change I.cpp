#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n[20];

        for(int i=0; i<20; i++)
        {
            cin>>n[i];

        }
        for(int j=0,i=19; i>=0; j++,i--)
        {

            cout<<"N["<<j<<"] = "<<n[i]<<endl;
        }

}

