#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,count=0,max;
        int a[51];
        char s;

        for(int i=0;i<51;i++)
        {
            scanf("%d%c",&a[i],&s);
            count++;
            if(s=='\n')
                break;
        }
        n=count-1;
        for(int i=0;i<count;i++)
        {
            if(a[i]==n)
            {
            a[i]=0;
            break;
            }
        }
        max=a[0];
        for(int i=1;i<count;i++)
        {
           if(max<a[i])
            {
               max = a[i];
            }
        }
        printf("%d\n",max);
    }
    return 0;
}

