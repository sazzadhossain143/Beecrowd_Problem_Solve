#include<bits/stdc++.h>
using namespace std;

int main()
{
    float s=0;
    int i,j;
    for( i=1,j=1; i<=39; i=i+2,j=j*2)
    {

        s=s+(i*1.00/j*1.00);
        /*if(i==1)cout<<"1";
        else cout<<i<<"/"<<j;
        if(i==39)break;
        cout<<" + ";*/

    }

    cout<<fixed<<setprecision(2)<<s<<endl;
}
