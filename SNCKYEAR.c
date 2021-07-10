#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	   int a;
	   scanf("%d",&a);
	   if(a==2010 || a==2015 || a==2016 || a==2017 || a==2019)
	   printf("HOSTED\n");
	   else
	   printf("NOT HOSTED\n");
	}
	return 0;
}

