#include <stdio.h>

int main(void) {
	// your code goes here
	int n,c=0,d=0;
	scanf("%d",&n);
	while(n--)
	{
	    int a;
        scanf("%d ",&a);
        if(a<1000000)
        {
        if(a%2==0)
        c++;
        else
        d++;
        }
        
        
	}
	if(c>d)
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
        
	return 0;
}

