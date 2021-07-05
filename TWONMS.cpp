#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    long long int a,b,n;
	    cin >> a >> b >> n;
	    if (n%2 == 1){
	        a = a*2;
	    }
	   
	    cout << max(a,b) *1LL/ min(a,b) << endl;
	}
	return 0;
}
