#include <stdio.h>

int main(void) {

	int t,i,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int a[8]={0};
	    int n,sum=0,k,v;
	    scanf("%d",&n);
	    for(j=0;j<n;j++)
	    {
	        scanf("%d%d",&k,&v);
	        if(k>=1&&k<=8){
	        if(a[k-1]<v)
	        a[k-1]=v;
	        }
	        
	    }
	    
	    for(k=0;k<8;k++)
	    sum+=a[k];
	    
	    printf("%d\n",sum);
	    
	    
	}
	
	
	return 0;
}


