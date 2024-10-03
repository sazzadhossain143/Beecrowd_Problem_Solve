#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[6],coun=0;

    for(int i=0; i<5; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<5; i++)
    {
        if(ar[i]%2==0)
         {
             coun++;

         }
    }
    cout<<coun<<" valores pares\n";
}

