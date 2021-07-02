#include<stdio.h>
int main(){
    int t,i,s1=0,s2=0,d1=0,d2=0,l1=0,l2=0,m,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d %d",&m,&n);
        s1=s1+m;
        s2=s2+n;
        if(s1>=s2){
            d1=s1-s2;
        }
        if(s2>s1){
            d2=s2-s1;
        }
        if(d1>l1){
            l1=d1;
        }
        if(d2>l2){
            l2=d2;
        }
        
    }
    if(l1>l2){
        printf("1 %d",l1);
    }
    if(l2>l1){
        printf("2 %d",l2);
    }
    return 0;
}
