#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a%10==0)
	    printf("0\n");
	    else if(a%5==0)
	    printf("1\n");
	    else
	    printf("-1\n");
	}
	return 0;
}

