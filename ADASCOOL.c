#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a%2==0 || b%2==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

