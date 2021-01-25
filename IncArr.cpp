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

    ll n, count = 0;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            count += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << count << "\n";
    return 0;
}