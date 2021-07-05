#include<stdio.h>

  int main()
{
 int t;
 scanf("%d", &t);

 int k, n;
 for(int i = 1; i<=t; i++){
    scanf("%d %d", &n, &k);
    int A[n];
    for(int j =0; j<n; j++){
        scanf("%d", &A[j]);
        if(A[j] <= k){
            printf("1");
            k-=A[j];
        }
        else{
            printf("0");
        }
    }
    printf("\n");
 }
  return 0;
}
