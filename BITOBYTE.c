#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,mm;
	    scanf("%d",&n);
	    mm=n%26;
	    int x=n/26;
	    int long long p=0,q=0,k=0;
	    if(mm==0)
	    k= pow(2,x-1);
	    else if(mm==1||mm==2)
	    p=pow(2,x);
	    else if(mm<=10)
	    q=pow(2,x);
	    else
	    k=pow(2,x);
	    printf("%lld %lld %lld\n",p,q,k);
	}
	return 0;
}
