#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int i,l,s=0,k=0;
	    char s1[100];
	    char s2[100];
	    scanf("%s",&s1);
	    scanf("%s",&s2);
	    l=strlen(s1);
	    int a[l];
	    for(i=0;i<l;i++)
	    {
	        if(s1[i]=='?' && s2[i]!='?')
	            a[i]=-1;
	        else if(s2[i]=='?' && s1[i]!='?')
	            a[i]=-1;
	        else if(s1[i]==s2[i])
	        {
	            if(s1[i]=='?')
	                a[i]=-1;
	            else
	                a[i]=0;
	        }
	        else
	            a[i]=1;
	    }
	    
	    for(i=0;i<l;i++)
	    {
	        if(a[i]==1)
	        {
	            s=s+1;
	            k=k+1;
	        }
	        if(a[i]==-1)
	        {
	            s=s+1;
	        }
	    }
	    printf("%d %d\n",k,s);
	}
	return 0;
}

