#include <stdio.h>

int sum(int d, int n);

int main() {
	short n;
	scanf("%hi", &n);
	while (n--)
	{
	    int d, x;
	    scanf("%d %d", &d, &x);
	    printf("%d\n", sum(d,x));
	}
	return 0;
}

// calculates sum of n natural numbers

int sum(int d, int n)
{
    if (d != 0)
        return sum(d-1, (n*(n+1)/2));
    else
        return n;
}
