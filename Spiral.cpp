#include <bits/stdc++.h>
using namespace std;
#define SPEED                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define l long
#define ll long long

int main()
{
    SPEED;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> y >> x;
        cout << y << " " << x << "\n";
    }
    return 0;
}