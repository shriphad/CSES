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
        cout << 1;
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION";
    }
    else if (n == 4)
    {
        cout << "2 4 1 3";
    }
    else
    {
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
        for (ll i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}