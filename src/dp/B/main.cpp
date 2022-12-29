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
 
lint n, k; 
lint h[100000], dp[1000000];

lint rec(lint i){
    if(i == 0) dp[i] = 0;
    else if(dp[i] == -1){
        lint best = linf; 
        FOR(j, 1, k + 1){
            if(i - j < 0) break;
            else {
                if(dp[i - j] == -1) dp[i - j] = rec(i - j);
                best = min(best, dp[i - j] + abs(h[i] - h[i - j]));
            }
        }
        dp[i] = best;
    }
    return dp[i]; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>k;
    REP(i, n){
        cin>>h[i];
        dp[i] = -1;
    }
    lint ans = rec(n - 1);
    cout << ans << endl;
    return 0;
}
