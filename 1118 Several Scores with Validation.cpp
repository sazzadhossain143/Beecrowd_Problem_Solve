#include<bits/stdc++.h>
using namespace std;

void avg()
{
    double n,sum=0;
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

    cout<<fixed<<setprecision(2);
    cout<<"media = "<<sum/2<<endl;
}

int main()
{
    avg();

    int x;

    while(1){
    cout<<"novo calculo (1-sim 2-nao)"<<endl;
    cin>>x;
    if(x==1)avg();
    if(x==2)break;
    }

}
