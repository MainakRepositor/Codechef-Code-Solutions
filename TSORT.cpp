#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int a[T];
	for(int i=0;i<T;i++)
	cin>>a[i];
	sort(a,a+T);
	for(int i=0;i<T;i++)
	cout<<a[i]<<endl;
	return 0;
}
