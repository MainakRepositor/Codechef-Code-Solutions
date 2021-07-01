#include <stdio.h>

int main(void) {
	int n=0;
	scanf("%d",&n);
	while(n--)
	{
	    int a=0,r=0,x=0,t=0,s=0;
	    scanf("%d",&a);
	    x = a;
	    while(a!=0)
	    {
	        r = a%10;
	        t = t*10+r;
	        a = a/10;
	    }
	    s = (x%10) + (t%10);
	    printf("%d\n",s);
	}
	return 0;
}

