#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a=0,r=0,s=0;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        r = a%10;
	        s = s*10+r;
	        a = a/10;
	    }
	    printf("%d\n",s);
	}
	return 0;
}

