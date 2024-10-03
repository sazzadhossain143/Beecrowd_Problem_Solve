#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[10];
    for(int i=0; i<4; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<4; i++)
    {
        if(x[i]<=0)x[i]=1;
        cout<<"X["<<i<<"] = "<<x[i]<<endl;

    }

}
