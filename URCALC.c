#include <stdio.h>

int main()
{
        double a,b;
        char c;
        scanf("%lf %lf %c",&a,&b,&c);
        
        if(c=='+')
        {
                printf("%f\n",a+b);
        }
        else if(c=='-')
        {
                printf("%f\n",a-b);
        }
        else if(c=='*')
        {
                printf("%f\n",a*b);
        }
        else
        {
                printf("%f\n",a/b);
        }
        return 0;
}
