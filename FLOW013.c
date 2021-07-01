#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a+b+c==180)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

