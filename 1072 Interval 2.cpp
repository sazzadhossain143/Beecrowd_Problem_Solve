#include<bits/stdc++.h>
using namespace std;
int main()
{

    int N,x,coun1=0,coun2=0;
    cin>>N;
    for(int i=1;i<=N; i++)
    {
        cin>>x;
        if(x>=10 && x<=20)
        {
            coun1++;
        }
        else
        {
            coun2++;
        }

    }
    cout<<coun1<<" in"<<endl;
    cout<<coun2<<" out"<<endl;
}
