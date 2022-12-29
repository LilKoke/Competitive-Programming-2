 #include "bits/stdc++.h"

using namespace std;

#define sp(x) cout<<setprecision(x);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define all(a) (a).begin(), (a).end()
#define inf 10000000
#define linf INT64_MAX*0.99
#define print(s) cout<<(s)<<endl
#define lint long long
#define yes "Yes"
#define no "No"

typedef pair<int, int> P;

lint n;
lint a[100000], b[100000], c[100000], dp[1000000][3];

void rec(lint i){
    if(i == 0){
        dp[i][0] = a[i];
        dp[i][1] = b[i];
        dp[i][2] = c[i];
    } else {
        REP(j, 3) if(dp[i - 1][j] == -1) rec(i - 1);
        dp[i][0] = max(dp[i - 1][1] + a[i], dp[i - 1][2] + a[i]);
        dp[i][1] = max(dp[i - 1][0] + b[i], dp[i - 1][2] + b[i]); 
        dp[i][2] = max(dp[i - 1][0] + c[i], dp[i - 1][1] + c[i]);
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    REP(i, n) cin>>a[i]>>b[i]>>c[i];
    REP(i, n){
        REP(j, 3){
            dp[i][j] = -1;
        }
    }
    rec(n - 1);
    lint ans = max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
    cout << ans << endl;
    return 0;
}
