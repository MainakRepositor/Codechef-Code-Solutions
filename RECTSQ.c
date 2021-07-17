#include <stdio.h>

int main(void) {
 
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int m, n, hcf;
        scanf("%d" "%d", &n, &m);
        for(int i=1; i<=m && i<=n; i++)
            if(m%i==0 && n%i==0)
                hcf=i;
        printf("%d\n", (m*n)/(hcf*hcf));
    }

    return 0;
}

