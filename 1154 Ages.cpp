#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,coun=0;
    float sum=0;
    while(1)
    {
        cin>>n;
        if(n<0)break;
        sum=sum+n;
        coun++;
    }
    cout<<fixed<<setprecision(2)<<sum/coun<<endl;
}
