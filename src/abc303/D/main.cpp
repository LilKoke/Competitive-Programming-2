#include "bits/stdc++.h"

using namespace std;

#define sp(x) cout << setprecision(x);
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) FOR(i, 0, n)
#define all(a) (a).begin(), (a).end()
#define linf INT64_MAX * 0.99
#define print(s) cout << (s) << endl
#define lint long long
#define yes "Yes"
#define no "No"
template <class T>
inline bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}

typedef pair<int, int> P;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    lint x, y, z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    lint dp[s.length() + 1][2];
    REP(i, s.length() + 1)
    REP(j, 2) dp[i][j] = linf;
    REP(i, s.length() + 1)
    dp[0][0] = 0;
    REP(i, s.length())
    {
        chmin(dp[i][0], dp[i][1] + z);
        chmin(dp[i][1], dp[i][0] + z);

        if (s[i] == 'a')
        {
            chmin(dp[i + 1][0], dp[i][0] + x);
            chmin(dp[i + 1][1], dp[i][1] + y);
        }
        else
        {
            chmin(dp[i + 1][0], dp[i][0] + y);
            chmin(dp[i + 1][1], dp[i][1] + x);
        }
    }
    cout << min(dp[s.length()][0], dp[s.length()][1]) << endl;
    return 0;
}
