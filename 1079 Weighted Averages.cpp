#include<bits/stdc++.h>
using namespace std;
int main()
{
/*    int N,i;
    float a,b,c,sum,avg;
    cin>>N;
    for(i=1; i<=N; i++)
    {
        cin>>a>>b>>c;
        sum=a*2+b*3+c*5;
        avg=sum/(2+3+5);
        cout<<fixed<<setprecision(1);
        cout<<avg<<endl;
    }
*/
    int N,i,j,k;
    float x[3],sum[3];

    cin>>N;

    for(i=0; i<N; i++)
    {

            sum[i]=0;
            for(j=0; j<3; j++)
            {
                cin>>x[j];
                if(j==0)x[j]=x[j]*2;
                if(j==1)x[j]=x[j]*3;
                if(j==2)x[j]=x[j]*5;

                sum[i]=sum[i] + x[j];
            }
            cout<<fixed<<setprecision(1);
            cout<<sum[i]/10<<endl;

    }



}
