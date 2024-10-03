#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[15];
    for(int i=0; i<15; i++)
    {
        cin>>ar[i];
    }
    int par[5],impar[5],j=0,k=0,i,a,b;
    for( i=0; i<15; i++)
    {
        if(ar[i]%2==0)
        {
            par[j]=ar[i];
            j++;

            if(j==5)
            {
                for( a=0; a<5; a++)
                {
                    cout<<"par["<<a<<"]"<<" = "<<par[a]<<endl;
                    par[a]='\0';
                }
                j=0;
            }
        }
        else
        {
            impar[k]=ar[i];
            k++;

            if(k==5)
            {
                for( b=0; b<5; b++)
                {
                    cout<<"impar["<<b<<"]"<<" = "<<impar[b]<<endl;
                    impar[b]='\0';
                }
                k=0;
            }
        }
    }


    for( b=0; b<5; b++)
    {
        if(impar[b]=='\0')break;
        cout<<"impar["<<b<<"]"<<" = "<<impar[b]<<endl;

    }
    for( a=0; a<5; a++)
    {
        if(par[a]=='\0')break;
        cout<<"par["<<a<<"]"<<" = "<<par[a]<<endl;

    }

}
