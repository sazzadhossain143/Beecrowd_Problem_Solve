#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first=0, second=1, coun=0, fibo, n;

    scanf("%d",&n);

    while(coun<n)
    {
        if(coun<=1)
        {
            fibo=coun;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d", fibo);
        coun++;
        if(coun==n){break;}
        cout<<" ";
    }
    cout<<endl;
}
/*
int fibo(int n)
{
    if(n==0){return 0;}
    if(n==1){return 1;}
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int x;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        cout<<fibo(i);
        if(i==(x-1)){break;}
        cout<<" ";
    }

    cout<<endl;
}
*/
