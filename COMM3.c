#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long int
#define fast ios_base::sync_with_stdio(NULL), cin.tie(0), cout.tie(0)
#define MOD 1e9 + 7
#define cin(a, n)               \
    for (int i = 0; i < n; i++) \
    cin >> a[i]

#define cout(a, n)              \
    for (int i = 0; i < n; i++) \
    cout << a[i]

#define rep(i, n) for (int i = 0; i < n; i++)
#define forr(i, n) for (int i = n; i >= 0; i--)
#define fep(i, a, b) for (int i = a; i < b; i++)

void solve()
{
    // This section is for Test case problems

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, x1, y1, x2, y2;
        float range;
        cin >> range >> x >> y >> x1 >> y1 >> x2 >> y2;
        float dis1 = ((x - x1) * (x - x1) + (y - y1) * (y - y1));
        float dis2 = ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        float dis3 = ((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
        if ((dis1 <= range * range) && (dis2 <= range * range))
            cout << "yes" << endl;
        else if ((dis2 <= range * range) && (dis3 <= range * range))
            cout << "yes" << endl;
        else if ((dis3 <= range * range) && (dis1 <= range * range))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

   
}

int main()
{
    fast;
    solve();
    return 0;
}
