#include<bits/stdc++.h>
using namespace std;
int main()
    //your code goes here.
{
	int T;
	cin>>T;
	while(T--)
	{
	    int x,y;
	    cin>>x>>y;
	    int total=x+y+1;
	    for(int i=2;i*i<=total;i++)
	    {
	        if(total%i==0)
	        {
	            total+=1;
	            i=1;
		    }
	    }
	    cout<<total-x-y<<"\n";
	}
}
