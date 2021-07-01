#include <stdio.h>

int main(void) {
	int n=0;
	scanf("%d",&n);
	while(n--)
	{
	    int a=0,r=0,c=0;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        r = a%10;
	        if(r==4)
	        c++;
	        a = a/10;
	    }
	    printf("%d\n",c);
	}
	return 0;
}

