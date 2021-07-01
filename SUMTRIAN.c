#include <stdio.h>
int max(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n][n];
	    
	    for(int row = 0; row < n; row++)
	        for(int col = 0; col < row + 1; col++)
	            scanf("%d",&arr[row][col]);
	    
	    for(int row = n - 2; row >= 0; row--)
	        for(int col = 0; col < row + 1; col++)
	            arr[row][col] += max(arr[row + 1][col], arr[row + 1][col + 1]);
	       
	    
	    printf("%d\n",arr[0][0]);
	}
	return 0;
}

