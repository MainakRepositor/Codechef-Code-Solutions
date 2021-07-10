#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,r=0,k=0;
	    scanf("%d",&a);
	    while(a!=0)
	    {
	        r = a%10;
	        if(r==4)
	        {
	        k++;
	        }
	        a = a/10;
	    }
	    printf("%d\n",k);
	}
	return 0;
}

