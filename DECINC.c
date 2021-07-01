#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(n%4==0)
	n++;
	else
	n--;
	printf("%d",n);
	return 0;
}

