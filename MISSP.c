#include <stdio.h>
int main(void) 
{
	int t,n,a,res;
	scanf("%d",&t);
    while(t--)
    {
        res=0;
        scanf("%d",&n);
        while(n--)
        { 
            scanf("%d",&a);
	        res^=a;
	    }
	    printf("%d\n",res);
	}
	return 0;
}
