#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int h1,t3;
        float c2;
        scanf("%d%f%d",&h1,&c2,&t3);
        if(h1>50 && c2<0.7 && t3>5600){
            printf("10\n");
        }
        if(h1>50 && c2<0.7 && t3<=5600){
            printf("9\n");
        }
        if(h1<=50 && c2<0.7 && t3>5600){
            printf("8\n");
        }
        if(h1>50 && c2>=0.7 && t3>5600){
            printf("7\n");
        }
        if((h1>50 && c2>=0.7 && t3<=5600) || (h1<=50 && c2<0.7 && t3<=5600) || (h1<=50 && c2>=0.7 && t3>5600)){
            printf("6\n");
        }
        if(h1<=50 && c2>=0.7 && t3<=5600){
            printf("5\n");
        }
    }
    return 0;
}








