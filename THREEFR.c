#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(x+y==z || y+z==x || x+z==y)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

