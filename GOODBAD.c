#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k,small=0,capital=0;
        scanf("%d %d",&n,&k);
        char s[n];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z')
                small++;
            if(s[i]>='A' && s[i]<='Z')
                capital++;
        }
        if(k<capital && k>=small)
            printf("brother\n");
        else if(k<small && k>=capital)
            printf("chef\n");
        else if(small<=k && capital<=k)
            printf("both\n");
        else
            printf("none\n");
    }
    return 0;
}
