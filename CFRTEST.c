#include <stdio.h>

int main(void) {
	unsigned short t;
	scanf("%hu",&t);
	while(t--)
	{
	    unsigned short n;
	    scanf("%hu",&n);
	    unsigned short a[n];
	    unsigned register short f=n;
	    for(unsigned register short i=0; i<n; i++)
	    {
	        scanf("%hu",&a[i]);
	    }
	    for(unsigned register short i=0; i<n; i++)
	    {
	        for(unsigned register short j=i+1; j<n; j++)
	        {
	            if(a[j]==0)
	            {
	                continue;
	            }
	            f-=(a[i]==a[j]);
	            a[j]=!(a[i]==a[j])+(a[i]!=a[j])*a[j];
	        }
	    }
	    printf("%hu\n",f);
	}
	return 0;
}

