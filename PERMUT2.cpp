#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int ele;
	
	while(true) {
	    cin>>ele;
	    
	    if(ele == 0) break;
	    
	    vector<int> nums(ele);
	    for(int i=0;i<ele;i++) cin>>nums[i];
	    
	    vector<int> newNums(ele);
	    
	    int n = nums.size();
	    
	    for(int i=0;i<n;i++) {
	        newNums[nums[i]-1] = i+1;
	    }
	    
	   // for(int n : newNums) cout<<n<<" ";
	    
	    if(nums == newNums) cout<<"ambiguous";
	    else cout<<"not ambiguous";
	    
	    cout<<endl;
	}
	return 0;
}
