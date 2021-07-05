#include <stdio.h>


int main() {
	int i,N,H,x;
	scanf("%d %d %d",&N,&H,&x);
	int t[N],flag=0;
	for(i=0;i<N;i++)
	{
	    scanf("%d",&t[i]);
	    if(x+t[i]>=H)
	    
	    {flag=1;
	    break;}
	    
	}
	if(flag==1)
	printf("YES");
	else
	printf("NO");
	
	
	
	return 0;
}

