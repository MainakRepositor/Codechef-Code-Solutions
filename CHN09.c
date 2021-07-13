#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
	   char ch[100],i=0,a=0,b=0,s=0;
	   scanf("%s",ch);
	   for(i=0;i<strlen(ch);i++)
	   {
	       if(ch[i]=='a')
	       a++;
	       else if(ch[i]=='b')
	       b++;
	   }
	   if(a==0 || b==0)
	   printf("0\n");
	   else if(a>b)
	   printf("%d\n",b);
	   else
	   printf("%d\n",a);
	   
	}
	return 0;
}

