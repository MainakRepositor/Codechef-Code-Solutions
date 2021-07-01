#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a;
	    scanf("%d",&a);
	    if(a<10)
	    printf("Thanks for helping Chef!\n");
	    else
	    printf("-1\n");
	}
	return 0;
}

