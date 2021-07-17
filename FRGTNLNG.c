#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t, n, k, l, i, j, phr_len, flag;
    char **dic, word[6], **phr;
    scanf("%d",&t);
    while(t-->0){
        scanf("%d%d",&n,&k);
        dic = (char**) malloc(n*sizeof(char*));
        for(i=0;i<n;i++){
            scanf("%s",word);
            dic[i] = (char*) malloc((strlen(word)+1)*sizeof(char));
            strcpy(dic[i],word);
        }

        phr_len = 0;
        while(k-->0){
            scanf("%d",&l);
            phr_len += l;
            if (phr_len == l){
                phr = (char**) malloc(l*sizeof(char*));
                for(i=0;i<l;i++){
                    scanf("%s",word);
                    phr[i] = (char*) malloc((strlen(word)+1)*sizeof(char));
                    strcpy(phr[i],word);
                }
            }
            else phr = (char**) realloc(phr, phr_len*sizeof(char*));
            for(;i<phr_len;i++){
                scanf("%s",word);
                phr[i] = (char*) malloc((strlen(word)+1)*sizeof(char));
                strcpy(phr[i],word);
            }
        }

        for(i=0;i<n;i++){
            flag=0;
            for(j=0;j<phr_len;j++){
                if(strcmp(dic[i],phr[j])==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1) printf("YES");
            else printf("NO");
            if(i<n-1) printf(" ");
            else printf("\n");
        }
    }
}


