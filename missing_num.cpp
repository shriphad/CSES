#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n;
    cin >> n;
    long long a[n - 1];
    for (long long i = 0; i < n - 1; i++)
        cin >> a[i];

    sort(a, a + (n - 1));
    if (a[n - 2] != n)
    {
        cout << n;
        return 0;
    }
    if (a[0] == n)
    {
        cout << n - 1;
        return 0;
    }
    for (long long i = 0; i < n - 2; i++)
    {
        if (a[i] + 1 != a[i + 1])
        {
            cout << a[i] + 1;
            break;
        }
    }
    return 0;
}