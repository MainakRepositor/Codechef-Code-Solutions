#include <stdio.h>


int main() {
	int n,i=0;
	scanf("%d",&n);
	while(n--)
	{
	    int arr[5],s=0;
	    for(i=0;i<5;i++)
	    {
	        scanf("%d",&arr[i]);
	        s = s+arr[i];
	    }
	    if(s==0)
	    printf("Beginner\n");
	    else if(s==1)
	    printf("Junior Developer\n");
	    else if(s==2)
	    printf("Middle Developer\n");
	    else if(s==3)
	    printf("Senior Developer\n");
	    else if(s==4)
	    printf("Hacker\n");
	    else 
	    printf("Jeff Dean\n");
	}
	return 0;
}

