#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>x;
    for(int j=1; j<=x; j++)
    {
        cin>>n;
        int coun=0;

        for(int i=2; i<n; i++)
        {
            if(n%i==0)coun++;
            if(coun==1)break;
        }
        if(coun==1)
        {
            cout<<n<<" nao eh primo"<<endl;
        }
        else
        {
            cout<<n<<" eh primo"<<endl;
        }
    }

}
