#include <bits/stdc++.h>
using namespace std;

int main() {
    double y;
    int x;
    cin>>x>>y;
    if(x%5==0 && y>=x+0.5){
        cout<< fixed << setprecision(2) << (y-x-0.5) ;
    }
    else{
        cout<< fixed << setprecision(2) << y ;
    }
	return 0;
}
