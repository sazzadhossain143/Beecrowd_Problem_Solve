#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[6],coun1=0,coun2=0,coun3=0,coun4=0;

    for(int i=0; i<5; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<5; i++)
    {
        if(ar[i]%2==0)
         {
             coun1++;
         }
         if(ar[i]%2!=0)
         {
             coun2++;
         }
         if(ar[i]>0)
         {
             coun3++;
         }
         if(ar[i]<0)
         {
             coun4++;
         }

    }
    cout<<coun1<<" valor(es) par(es)\n";
    cout<<coun2<<" valor(es) impar(es)\n";
    cout<<coun3<<" valor(es) positivo(s)\n";
    cout<<coun4<<" valor(es) negativo(s)\n";
}
