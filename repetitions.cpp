#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    long long res = 1;
    for (long long i = 0; i < s.length() - 1;)
    {
        long long count = 1;
        for (long long j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
                count++;
            else
                break;
        }
        res = max(count, res);
        i += count;
    }
    cout << res;
    return 0;
}