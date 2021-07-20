#include <iostream>
using namespace std;

string partner(int n){
    int x = n % 8;
    string arr[9] = {"", "LB", "MB", "UB", "LB", "MB", "UB", "SU", "SL"};
    if(x == 7) return to_string(n+1) + arr[7];
    else if(x == 0) return to_string(n-1) + arr[8];
    else{
        if(x>3) return to_string(n-3) + arr[x];
        else return to_string(n+3) + arr[x];
    }
}

int main() {
	int t, n;
	
	
	std::cin >> t;
	while(t--){
        cin >> n;
        cout<< partner(n)<<endl;
    }
	return 0;
}
