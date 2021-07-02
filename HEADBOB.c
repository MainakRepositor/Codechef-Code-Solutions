#include <stdio.h>

int main(void) {
    int i,indian,notindian,n,g;
    scanf("%d",&n);
    while(n>0) {
        scanf("%d",&g);
        indian=0;
        notindian=0;
        char str[g+1];
        scanf("%s",&str);
        for(i=0;i<=g;i++) {
            if(str[i]=='I')
                indian++;
            else if(str[i]=='Y')
                notindian++;
        }
        if((indian==0 && notindian==0)||(indian==notindian))
            printf("NOT SURE\n");
        else if(indian<notindian)
            printf("NOT INDIAN\n");
        else
            printf("INDIAN\n");
        n--;
    }
	return 0;
}

