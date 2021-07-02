#include <stdio.h>
                                             
int main() {
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,min,divider;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	   min=a[0];
	   for(i=0;i<n;i++)
	   {
	      if(a[i]<min)
	        min=a[i];
	   }
	   for(i=1;i<=min;i++)
	   {
	       int count=0;
	       for(j=0;j<n;j++)
	       {
	           if(a[j]%i==0)
	             count++; 
	       }
	       if(count==n)
	          divider=i;
	   }
	   for(i=0;i<n;i++)
	     printf("%d ",a[i]/divider);
	   printf("\n");                          
	}
	return 0;
}

