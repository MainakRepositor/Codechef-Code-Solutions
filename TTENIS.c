#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	    char c[100];  int i=0,z=0,k=0;
	    scanf("%s",c);
	    for(i=0;i<strlen(c);i++)
	    {
	        if(c[i]=='0')
	        z++;
	        else if(c[i]=='1')
	        k++;
	    }
	    if(z>k)
	    printf("LOSE\n");
	    else 
	    printf("WIN\n");
	    
	}
	return 0;
}

