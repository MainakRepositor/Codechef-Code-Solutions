#include <iostream>
using namespace std;

int main() {
	int t,m,x,y,h,count,arr[100];
	cin>>t;
	while(t--)
	{ 
	 for(int i=0;i<100;i++)
	 {
	     arr[i]=i+1;
	 }
	 
	 int a,c;
	 count = 0;
	 cin>>m>>x>>y;
	 h=x*y;
	 int b[m];
	
	 for(int i=0;i<m;i++)
	  {
	      cin>>b[i];
	      
	      if(b[i]-h<1)
	      a=1;
	      else
	      a=b[i]-h;
	      
	      if(b[i]+h>100)
	      c=100;
	      else
	      c=b[i]+h;
	      
	      for(int j=a-1;j<c;j++)
	      {
	          arr[j]=0;
	      }
	  }
	  
	 for(int i=0;i<100;i++)
	 {
	     if(arr[i]!=0)
	     {
	       count++;
	     }
	 }
	
	 cout<<count<<endl;
	 
	}
	return 0;
}
