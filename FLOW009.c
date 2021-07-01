#include <stdio.h>


int main() {
	int n;
	scanf("%d",&n);

	while(n--)
	{
	     double a,b,d=0.9,t;
	    scanf("%lf %lf",&a,&b);
	   
	    if(a>1000)
	    t = a*b*d;
	    else
	    t = a*b;
	    printf("%0.6lf\n",t);
	}
	    
	    
	
	
	return 0;
}

