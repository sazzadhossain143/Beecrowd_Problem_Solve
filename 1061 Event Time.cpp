#include <bits/stdc++.h>
using namespace std;

int main(){
 char ar1[4],ar2[4],c1,c2,c3,c4;
 int d1,d2,h1,h2,m1,m2,s1,s2;

 cin >> ar1 >> d1;
 cin >> h1 >> c1 >> m1 >> c2 >> s1;
 cin >> ar2 >> d2;
 cin >> h2 >> c3 >> m2 >> c4 >> s2;

    int day1,day2;
    day1=(d1*24*3600)+(h1*3600)+(m1*60)+s1;
    day2=(d2*24*3600)+(h2*3600)+(m2*60)+s2;

    int d,h,m,s,t;
    t=day2-day1;
    d=t/(24*3600);
    int t2=t%(24*3600);
    h=t2/(3600);
    int t3=t2%3600;
    m=t3/60;
    s=t3%60;

    if(h<0)
    {d--;h=24+h;}

    if(m<0){h--;m=60+m;}

    if(d<0){m--;s=60+s;}

     cout << d << " dia(s)" << endl;
     cout << h << " hora(s)" << endl;
     cout << m << " minuto(s)" << endl;
     cout << s << " segundo(s)" << endl;

 return 0;
}
