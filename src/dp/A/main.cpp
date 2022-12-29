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

lint dp[100000], h[100000]; 
lint n;
lint rec(lint i){
    if(i == 0) dp[i] = 0;
    else if(i == 1) dp[i] = abs(h[1] - h[0]);
    else if(dp[i] == -1) {
        if(dp[i - 2] == -1) dp[i - 2] = rec(i - 2);
        if(dp[i - 1] == -1) dp[i - 1] = rec(i - 1);
        dp[i] = min(dp[i - 2] + abs(h[i] - h[i-2]), dp[i - 1] + abs(h[i] - h[i-1]));
    }
    return dp[i];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    REP(i,n){
        cin>>h[i];
        dp[i] = -1;
    }
    lint ans = rec(n - 1);
    cout << ans << endl;
    return 0;
}
