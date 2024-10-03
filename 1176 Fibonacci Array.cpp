#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>x;
    for(int i=1; i<=x; i++)
    {
        long long int ar[60];
        ar[0]=0;ar[1]=1;
        cin>>n;

        if(n>=0 && n<=60){
        for(int j=2; j<=n; j++)
        {
            ar[j]=ar[j-1]+ar[j-2];
        }
       /* for(int j=0; j<=n; j++)

        {
            cout<<ar[j]<<" ";
        }*/
         cout<<"Fib("<<n<<") = "<<ar[n]<<endl;}
    }
}
