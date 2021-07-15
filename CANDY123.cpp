#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for (int i=0;i<T;i++)
    {
        int A,B;
        cin>>A>>B;
        int c=0,d=0,e=0,f=0;
        for (int j=1;1;j=j+2)
        {
             c=c+j;
            if (c>A)
                break;
            e++;
        }
        for (int j=2;1;j=j+2)
        {
             d=d+j;
            if (d>B)
                break;
            f++;
        }
        if (f>e || f==e)
            cout<<"Bob\n";
        else
            cout<<"Limak\n";

    }
    return 0;
}
