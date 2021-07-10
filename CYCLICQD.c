#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(a+c==180 || b+d==180)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

