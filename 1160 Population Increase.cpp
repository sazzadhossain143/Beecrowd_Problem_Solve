#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,pa,pb,c;
    double g1,g2;
    cin>>t;
    for(int i=1;  i<=t; i++)
    {
        cin>>pa>>pb>>g1>>g2;
        c=0;
        while(pa<=pb){
        pa=pa+(pa*g1/100);
        pb=pb+(pb*g2/100);

        c++;
        if(c>100)break;
        }
        if(c>100)
        cout<<"Mais de 1 seculo."<<endl;
        else
        cout<<c<<" anos."<<endl;

    }
}
