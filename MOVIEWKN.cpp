#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int l[n],r[n],i,count=0,max=0,index=0;
	    for(i=0;i<n;i++){
	        cin>>l[i];
	    }
	    for(i=0;i<n;i++){
	        cin>>r[i];
	    }
	    for(i=0;i<n;i++){
	        if(max<(l[i]*r[i])){
	            max=l[i]*r[i];
	            index=r[i];
	            count=i+1;
	        }
	        if(max==(l[i]*r[i])){
	            if(index<r[i]){
	                index=r[i];
	                count=i+1;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
