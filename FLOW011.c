#include <stdio.h>

int main() {
	// your code goes here
	int salary,t,i;
	float HRA,DA;
	scanf("%d\n",&t);
	while(t--){
	    scanf("%d\n",&salary);
	    if(salary<1500){
	        HRA=0.1*salary;
	        DA=0.9*salary;
	    }
	    else if(salary>=1500){
	        HRA=500;
	        DA=0.98*salary;
	    }
	    printf("%0.2f\n",salary+HRA+DA);
	}
	return 0;
}

