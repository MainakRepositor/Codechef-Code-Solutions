#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a=0, f=1,i=0;
	    scanf("%d",&a);
	    for(i=1;i<=a;i++)
	    f = f*i;
	    
	    printf("%d\n",f);
	    
	}
	return 0;
}

