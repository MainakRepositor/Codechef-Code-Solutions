#include <stdio.h>

int main(void) {
	// your code goes here
	int x,i,n1,n2,n3;
	scanf("%d",&x);
	for(i=0;i<x;i++){
	    scanf("%d %d %d",&n1,&n2,&n3);
	    if(n1>n3 && n2>n3 && n1>n2 || n1<n3 && n2<n3 && n1<n2)
	    printf("%d\n",n2);
	    else if(n2>n1 && n2>n3 && n1>n3 || n2<n1 && n2<n3 && n1<n3)
	    printf("%d\n",n1);
	    else
	    printf("%d\n",n3);
	}
	return 0;
}

