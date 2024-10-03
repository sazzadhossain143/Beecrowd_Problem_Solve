#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,sum=0;
    int coun=0;

    while(1){

    cin>>n;
    if(n>=0 && n<=10)
    {
        sum=sum+n;
        coun++;
    }
    else
       {
           cout<<"nota invalida"<<endl;
       }
    if(coun==2)break;
    }

    cout<<"media = "<<sum/2<<endl;


}
