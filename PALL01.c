#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int x,num,r=0,s=0;
	    scanf("%d",&x);
	    num = x;
	    while(x!=0)
	    {
	        r = x%10;
	        s=s*10+r;
	        x=x/10;
	    }
	    if(s==num)
	    printf("wins\n");
	    else
	    printf("loses\n");
	    
	}
	return 0;
}

