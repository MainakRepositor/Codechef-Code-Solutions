#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a=0,b=0;
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    printf("%d %d\n",a,(a+b));
	    else
	    printf("%d %d\n",b,(a+b));
	}
	return 0;
}

