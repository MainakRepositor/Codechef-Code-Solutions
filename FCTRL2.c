#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int nfact[200]={0};
	    nfact[0]=1;
	    int m=1,temp=0;
	    for(int i=2; i<=n;i++){
	        for(int j=0;j<m;j++){
	            int x= nfact[j]*i+temp;
	            nfact[j]=x%10;
	            temp=x/10;
	            
	        }
	        while(temp){
	            nfact[m++]=temp%10;
	            temp=temp/10;
	        }
	    }
	    for(int i=m-1;i>=0;i--){
	        printf("%d",nfact[i]);
	    }
	    
	    printf("\n");
	}
	return 0;
}

