#include <stdio.h>

int den(int n)
{
    int temp,count=0;
    temp = n/100;
    n = n - (temp*100);
    count = count + temp;
    temp = n/50;
    n = n - (temp*50);
    count = count+temp;
     temp = n/10;
    n = n - (temp*10);
    count = count + temp;
     temp = n/5;
    n = n - (temp*5);
    count = count + temp;
     temp = n/2;
    n = n - (temp*2);
    count = count + temp;
     temp = n/1;
    n = n - (temp*1);
    count = count + temp;
    return count;
}

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    printf("%d\n",den(n));
	}
	return 0;
}

