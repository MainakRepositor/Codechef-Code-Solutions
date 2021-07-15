#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    int a,k,i=0,c=0;
	    scanf("%d %d",&a,&k);
	    int arr[a];
	    for(i=0;i<a;i++)
	    {
	        scanf("%d",&arr[i]);
	        arr[i] = arr[i] + k;
	    }
	    for(i=0;i<a;i++)
	    {
	        if(arr[i]%7==0)
	        c++;
	    }
	    printf("%d\n",c);
	}
	return 0;
}

