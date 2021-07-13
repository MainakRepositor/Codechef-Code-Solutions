#include <stdio.h>
int countmatch(int x)
{
    if(x==0)
    return (6);
    else if(x==1)
    return (2);
    else if(x==2)
    return (5);
    else if(x==3)
    return (5);
    else if(x==4)
    return (4);
    else if(x==5)
    return (5);
    else if(x==6)
    return (6);
    else if(x==7)
    return (3);
    else if(x==8)
    return (7);
    else if(x==9)
    return (6);
    else 
    return -1;
}

int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,b,s=0,r=0,n=0;
	    scanf("%d %d",&a,&b);
	    s =a+b;
	    while(s!=0)
	    {
	        r = s%10;
	        n = n + countmatch(r);
	        s = s/10;
	    }
	    printf("%d\n",n);
	}
	return 0;
}

