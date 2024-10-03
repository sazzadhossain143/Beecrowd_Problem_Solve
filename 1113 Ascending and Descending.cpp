#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M,N;

    while(1)
    {
        cin>>M>>N;
        if(M==N)
        {
            break;
        }
        else if(M>N)
        {

            cout<<"Decrescente"<<endl;
        }
        else if(M<N)
        {

            cout<<"Crescente"<<endl;
        }
    }
}
