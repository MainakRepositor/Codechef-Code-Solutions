#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    string a="",b="";
    cin>>a>>b;

    bool tf=true;
    for(unsigned long long i=0;i<a.length();i++)
      {
      if(a[i]!=b[i]&&a[i]!='?'&&b[i]!='?') {tf=false; break;}
      }
    if(tf==true) {cout<<"Yes\n";}
    else {cout<<"No\n";}
    }
return 0;
}
