
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int a[n],num1,num2;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        if(a[0]>a[1])
        {
            num1 = a[0];
            num2 = a[1];
        }
        else
        {
            num1 = a[1];
            num2 = a[0];
        }
        for(i=2;i<n;i++)
        {
            if(num2>a[i])
            {
                num1 = num2;
                num2 = a[i];
            }
            else if(a[i]<num1)
            {
                num1 = a[i];
            }

        }
        int sum=num1+num2;
            printf("%d\n",sum);

    }
        return 0;
}
