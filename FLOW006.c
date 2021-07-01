#include <stdio.h>

int main(void) {
	int n=0;
	scanf("%d",&n);
	while(n--)
	{
	    int num=0,r=0,s=0;
	    scanf("%d",&num);
	    while(num!=0)
	    {
	        r = num%10;
	        s = s+r;
	        num = num/10;
	    }
	    printf("%d\n",s);
	    
	}
	return 0;
}

