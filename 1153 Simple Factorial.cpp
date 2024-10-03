#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{

    if(n==1){return 1;}
    return n*fact(n-1);
}
int main()
{
    int first=0, second=1, coun=0, fibo, n;

    printf("Enter how many fibonacci numbers : ");
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
        printf("%d ", fibo);
        coun++;
    }

 /*   int x;
    cin>>x;
    cout<<fact(x);
    cout<<endl;*/
}
