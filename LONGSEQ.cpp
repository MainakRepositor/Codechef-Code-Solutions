#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int c1=0,c0=0;
	    for(int j=0;j<s.size();j++)
	    {
	        if(s[j]=='0')
	        c0++;
	        else
	        c1++;
	    }
	    if(c1==0&&c0==0)
	    cout<<"Yes"<<endl;
	    else if(c1==1||c0==1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
