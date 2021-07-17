#include <stdio.h>

int main(void) {
	unsigned short tc;
	scanf("%hu",&tc);
	while(tc--)
	{
	    unsigned short n,k;
	    scanf("%hu %hu",&n,&k);
	    unsigned short t[n],d[n];
	    unsigned register short cost=0;
	    for(unsigned register short i=0; i<n; i++)
	    {
	        scanf("%hu %hu",&t[i],&d[i]);
	        cost+=(t[i]>k)*((t[i]-k)*d[i])+(k>=t[i])*0;
	        k=(k>t[i])*(k-t[i])+(k<=t[i])*0;
	    }
	    printf("%hu\n",cost);
	}
	return 0;
}

