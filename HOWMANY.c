#include <stdio.h>


int main() {
	int n,r=0,c=0;
	scanf("%d",&n);
	while(n!=0)
	{
	    r = n%10;
	    c++;
	    n = n/10;
	    
	}
	if(c==0 || c==1)
	printf("1");
	else if(c==2)
	printf("2");
	else if(c==3)
	printf("3");
	else
	printf("More than 3 digits");
	
	return 0;
}

