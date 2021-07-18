#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,t,x,y,j;
    int w=2;
    scanf("%d",&t);
    int *A;int *B;
    A=(int *)malloc(t*sizeof(int));
    B=(int *)malloc(t*sizeof(int));
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&A[i],&B[i]);
    }
    
    for(i=0;i<t;i++)
    {
        int a=0;
        
        if(A[i]>2*B[i] && A[i]>B[i])
        {
            printf("%d\n",A[i]-B[i]);
        }
        else if(A[i]>B[i])
        {
        printf("%d\n",A[i]-B[i]);
        }
        else{
            printf("0\n");
        }
    }
    
    return 0;
}
