#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,i,j,c=0;
	    scanf("%d",&n);
	    int arr[n];
	    
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	        int sum=0;
	        int pro=1;
	        for(j=i;j>=0;j--)
	        {
	            sum=sum+arr[j];
	            pro=pro*arr[j];
	            if(sum==pro)
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
	return 0;
}

