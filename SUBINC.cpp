#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<long long int> a;
    for(int i=0; i<n; i++)
    {
        long long int d; cin>>d;
        a.push_back(d);
    }

    long long int count = n;
    long long int streak = 1;
    for(int i=0; i<n-1; i++)
    {

        if (i==0 && a[i]<=a[i+1])
        {
            streak++;
            count++;
        }
        else
            if (a[i] <= a[i+1])
            {
                count += streak;
                streak++;
            }
        else
            streak = 1;        
    }
    cout<<count<<endl;
}


int main()
{
    int t; cin>>t;
    while(t--)
    solve();
}
