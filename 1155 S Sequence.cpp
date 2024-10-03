#include<bits/stdc++.h>
using namespace std;

int main()
{
    float s=0;
    for(int i=1; i<=100; i++)
    {
        s=s+(1.00/i*1.00);
      /*  if(i==1)cout<<"1";
        else cout<<"1/"<<i;
        if(i==100)break;
        cout<<" + ";
        */
    }

    cout<<fixed<<setprecision(2)<<s<<endl;
}
