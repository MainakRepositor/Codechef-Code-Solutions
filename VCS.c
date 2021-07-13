#include <stdio.h>

int main(void) {
	unsigned short t;
	scanf("%hu",&t);
	while(t--)
	{
	    unsigned short n,m,k,c1=0,c=0;
	    scanf("%hu %hu %hu",&n,&m,&k);
	    unsigned short a[m],b[k];
	    for(unsigned register short i=0; i<m; i++)
	    {
	        scanf("%hu",&a[i]);
	    }
	    for(unsigned register short i=0; i<k; i++)
	    {
	        scanf("%hu",&b[i]);
	    }
	    for(unsigned register short i=1; i<=n; i++)
	    {
	        unsigned register short a1=0,a2=0;
	        for(unsigned register short j=0; j<m; j++)
	        {
	            if(i==a[j])
	            {
	                a1=1;
	                break;
	            }
	        }
	        for(unsigned register short j=0; j<k; j++)
	        {
	            if(i==b[j])
	            {
	                a2=1;
	                break;
	            }
	        }
	        c+=(a1==1&&a2==1);
	        c1+=(a1==0&&a2==0);
	    }
	    printf("%hu %hu\n",c,c1);
	}
	return 0;
}

