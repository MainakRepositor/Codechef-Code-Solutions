#include <iostream>
using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    int tweet[K];
    for(int i=0;i<=N;i++){
        tweet[i]=0;
    }
    string s;
    string s1="CLICK";
    int index;
    int count=0;
    while(K--){
        cin>>s;
        if(s==s1){
         cin>>index;
         if(tweet[index]==0)
         tweet[index]=1;
         else
         {tweet[index]=0;}

        }
        else{
         for(int i=1;i<N+1;i++){
          tweet[i]=0;
         }
        }
       count=0;
       for(int i=1;i<N+1;i++){
        if(tweet[i]>0){
            count++;
        }
       }
    cout<<count<<endl;
    }

	return 0;
}
