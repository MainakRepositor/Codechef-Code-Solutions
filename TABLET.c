#include <stdio.h>


int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	   long n,b,w,h,p,x=0,set=0;
	   scanf("%lu %lu",&n,&b);
	   while(n--)
	   {
	       scanf("%lu %lu %lu",&w,&h,&p);
	       set = w*h;
	       if(p<=b)
	       {
	           if(x<set)
	           {
	               x = set;
	           }
	       }
	       
	   }
	   if(x==0)
	       printf("no tablet\n");
	       else
	       printf("%lu\n",x);
	}
	return 0;
}

