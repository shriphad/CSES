#include <bits/stdc++.h>
using namespace std;

bool binSearch(long long int a[], long long int l, long long int r, long long int k, int ele)
{
    while (l <= r)
    {
        long long int m = l + (r - l) / 2;

        if ((a[m] == ele) || (a[m] == ele - k) || (a[m] == ele + k))
            return true;

        if (a[m] < ele)
            l = m + 1;

        else
            r = m - 1;
    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    long long n, m, k, count = 0;
    cin >> n >> m >> k;
    long long a[n], b[m];
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    for (long long i = 0; i < n; i++)
    {
        for (long long j = i; j < n; j++)
        {
            if (b[i] == (a[j] - k) || b[i] == (a[j] + k) || b[i] == a[j])
                count++;
        }
        // if (binSearch(b, 0, m, k, a[i]))
        //     count++;
    }

    cout << count;
    return 0;
}