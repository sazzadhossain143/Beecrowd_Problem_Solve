#include <iostream>
#include<iomanip>
using namespace std;

int main() {

    int coun=0;
    float ar[6],avg,sum=0;

    for(int i=0; i<6; i++)
    {
        cin>>ar[i];
    }
    for(int i=0; i<6; i++)
    {
        if(ar[i]>0)
         {
             coun++;
             sum = sum + ar[i];
         }

    }
    cout<<coun<<" valores positivos\n";
    avg=sum/(float)coun;
    cout<<showpoint;
    cout<<fixed<<setprecision(1);
    cout<<avg<<endl;

    return 0;
}
