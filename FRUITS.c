#include <stdio.h>
#include <stdlib.h>

int computeDiff(int *n, int *m, int *k);

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while (t--)
	{
	    // n - num of apples, m - num of oranges, k - gold coins
	    int n, m, k;
	    scanf("%d %d %d", &n, &m, &k);
	    printf("%d\n", computeDiff(&n, &m, &k));
	}
	return 0;
}

int computeDiff(int *n, int *m, int *k)
{   
    int diff = abs(*n - *m);
    // check if there is a difference and number of gold coins is not 0
    if(*n != *m && *k != 0)
    {
        // if diff is more than gold coins all of them can be used to try and bridge the difference
        // subtract gold coins to get the new difference
        if (diff > *k)
            diff -= *k;
        // or else if gold coins are more all of them can be used to make the difference 0
        else
            diff = 0;
    }
    return diff;
}
