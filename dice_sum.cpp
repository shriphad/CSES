#include <bits/stdc++.h>
using namespace std;

int main()
{
    const unsigned int M = 1000000007;
    long long int n;
    cin >> n;
    long long int dp[n + 1] = {0};
    dp[0] = dp[1] = 1;
    dp[2] = 2;
    for (long long int i = 3; i <= n; i++)
    {
        for (long long int j = 1; j <= 6; j++)
        {
            if (j > i)
                break;
            dp[i] = (dp[i] % M + dp[i - j] % M) % M;
        }
    }
    cout << dp[n] % M << endl;
    return 0;
}