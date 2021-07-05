#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>




int main(){
int t;
scanf("%d",&t);
while(t--){
	int n;
	scanf("%d",&n);
	char s[n][2][20];
	for(int i=0;i<n;i++){
		scanf("%s",s[i][0]);
		scanf("%s",s[i][1]);
		}
	int flag=0;
	for(int i=0;i<n;i++){
		flag=0;
		for(int j=0;j<n;j++){
			if(i==j){}
			else if(strcmp(s[i][0],s[j][0])==0){
				flag=1;
				}
			}
			(flag==0)?(printf("%s\n",s[i][0])):(printf("%s %s\n",s[i][0],s[i][1]));
		}
	}


 return 0;	
}
