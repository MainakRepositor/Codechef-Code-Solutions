#include <iostream>
using namespace std;
#define ll long long int
#define z ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main() {
	// your code goes here
	z;
	ll t;
	cin>>t;
	while(t--){
	    ll c,d,l;
	    cin>>c>>d>>l;
	    ll maxleg=4*(c+d);
        ll rem=0;
        if(c>2*d)
	      rem=c-(2*d);
	    ll minleg=4*(d+rem);
	   if(l%4==0 && l>=minleg && l<=maxleg)
	    cout<<"yes\n";
	    else
	     cout<<"no\n";
	}
	return 0;
}
