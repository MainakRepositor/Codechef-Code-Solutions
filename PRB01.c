#include<stdio.h>
main()
{
    int T;
    scanf("%d",&T);
    while(T--){
        int N,i;
        scanf("%d",&N);
        for(i=2;i<=N;i++)
            if(N%i==0)
              break;
        if(i==N)
          printf("yes\n");
        else
          printf("no\n");

    }
}
