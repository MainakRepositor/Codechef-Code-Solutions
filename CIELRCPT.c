#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p;
        scanf("%d",&p);
        int res=0, i=11;
        while(i>=0 && p>0)
        {
            int k=p/pow(2,i);
            p=p-pow(2,i)*k;
            res+=k;
            i--;
        }
        printf("%d\n",res);
    }
    return 0;
}
