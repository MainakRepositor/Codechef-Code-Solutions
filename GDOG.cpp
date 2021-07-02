#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    int a[k],z=1;
	    
	    for(int i=0;i<k;i++)
	    {
	        a[i]=n%z;
	        z++;
	    }
	    sort(a,a+k,greater<int>());
	    cout<<a[0]<<endl;
	}
	return 0;
}
