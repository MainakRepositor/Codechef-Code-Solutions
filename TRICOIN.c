#include <stdio.h>

int main()
{
    int T;
   scanf("%d",&T);
	while (T--) {
	int a,d=0;
	scanf("%d",&a);
	for(int i=1;i<100000;i++)
	{
	    d=d+i;
	    if(d>a)
	    {
	    scanf("%d\n",--i);
	    break;
	    }
	}
}
return 0;
}
