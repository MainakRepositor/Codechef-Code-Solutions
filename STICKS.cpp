#include <iostream>
using namespace std;

int main() {
    int t,n,sum=0,i=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar [n];
       int m[n/2];
        for(int x=0;x<n;x++)
        {
            cin>>ar[x];
        }
        for(int x=0;x<n;x++)
        {
            for(int y=x+1;y<n&&ar[x]!=0;y++)
            {
                
                if(ar[x]==ar[y])
                {
                    m[i++]=ar[x];
                    ar[y]=0;
                    break;
                }
                
            }ar[x]=0;
        }
        for(int x=0;x<i;x++)
        {
            int a=m[x];
            for(int y=x+1;y<i;y++)
            {
                int b=m[y];
                if((a*b)>sum)
                {
                    sum=a*b;
                }
            }
            
            
        }
        if(i>1)
        cout<<sum<<endl;
        else
        {cout<<-1<<endl;}
        sum=0;i=0;
        
    }

	return 0;
}
