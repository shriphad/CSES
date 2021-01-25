#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long n;
    set<int> s1;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        s1.insert(temp);
    }

    cout << s1.size();

    return 0;
}