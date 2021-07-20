#include<stdio.h>
int main(){
int t;
long long int n,b,m,ans;
scanf("%d",&t);
while(t--){
ans=0;
scanf("%lld%lld%lld",&n,&b,&m);
while(n>1){
if(n%2==0){
n=n/2;
ans+=m*n + b;
m=m*2;
}else{
ans+=m*((n+1)/2)+b;
m=m*2;
n=n-((n+1)/2);
}
}
printf("%lld\n",(ans+m));
}
return 0;
}
