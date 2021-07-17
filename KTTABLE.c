#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	     long int a[100000000],b[100000000];
	    int j,k,c=0,e=0;
	    scanf("%d",&n);
	    for(j=0;j<n;j++){
	        scanf("%ld",&a[j]);
	    }
	    for(k=0;k<n;k++){
	        scanf("%ld",&b[k]);
	    }
	    for(j=0,k=0;j<n,k<n;j++,k++){
	        if((j==0)&&(k==0)){
	            if(a[0]>=b[0])
	            e++;
	        }
	        if((a[j]-a[j-1])>=b[k]){
	            c++;
	        }
	        
	    }
	    printf("%d\n",c+e);
	}
	return 0;
}
