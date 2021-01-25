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
        ll row, col;
        cin >> row >> col;
        if (row < col)
        {
            if (col % 2 == 1)
            {
                ll temp = col * col;
                cout << temp - row + 1 << "\n";
            }
            else
            {
                ll temp = (col - 1) * (col - 1) + 1;
                cout << temp + row - 1 << "\n";
            }
        }
        else
        {
            if (row % 2 == 0)
            {
                ll temp = row * row;
                cout << temp - col + 1 << "\n";
            }
            else
            {
                ll temp = (row - 1) * (row - 1) + 1;
                cout << temp + col - 1 << "\n";
            }
        }
    }
    return 0;
}