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

    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "0"
             << "\n";
        return 0;
    }
    cout << "0"
         << "\n";
    for (ll i = 2; i <= n; i++)
    {
        ll val = ((i * i * (i * i - 1)) / 2) - 4 * (i - 1) * (i - 2);
        cout << val << "\n";
    }
    return 0;
}