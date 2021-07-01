#include <stdio.h>




int main(void) {
	int T;
	scanf("%d", &T);
	
	while(T--){
	    int n, num;
	    scanf("%d", &n);
	    
	    long long small = 1000000000000000000;     //max value of array is 10^5
	    
	    //finding the smallest number
	    for(int i=0; i<n; i++){
	        scanf("%lld", &num);
	        if(num < small)
	            small = num;
	    }
	    
	    printf("%lld\n", small*(long long)(n-1));
	}
	return 0;
}
