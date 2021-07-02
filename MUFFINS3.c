#include <stdio.h>

int main(void) {
    int t,n,c;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        if(n%2==0)
        c=(n/2)+1;
        else
        c=(n+1)/2;
        printf("%d\n",c);
        t--;
    }
    
    

	return 0;
}

