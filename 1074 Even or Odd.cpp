#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,x,i;
    cin>>N;

    for(i=1; i<=N; i++)
    {
        cin>>x;
        int y=x%2;
        if(x%2==0 && x<0)
            cout<<"EVEN NEGATIVE\n";
        if(x%2==0 && x>0)
            cout<<"EVEN POSITIVE\n";
        if(y!=0 && y<0)
            cout<<"ODD NEGATIVE\n";
        if(x==0)
            cout<<"NULL\n";
        if(y!=0 && y>0)
            cout<<"ODD POSITIVE\n";

    }
}
