#include <stdio.h>

int main(void) {
	// your code goes her
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int b,sum=0;
	    scanf("%d",&b);
	    for(int i=0;i<b/2; i++)
	    {
	        sum=sum+i;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

