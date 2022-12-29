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
 
lint N, W; 
lint w[101], v[101], dp[101][100001];

lint rec(lint i){
    if(i == 0){
        REP(j, W + 1){
            if(j < w[i]) dp[i][j] = 0;
            else dp[i][j] = v[i];
        }
    } 
    else{
        REP(j, W + 1){
            if(dp[i - 1][j] == -1) rec(i - 1);
            if(j - w[i] >= 0){
                if(dp[i - 1][j - w[i]] == -1) rec(i - 1);
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
            else dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[i][W];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> W;
    REP(i, N) cin>>w[i]>>v[i];
    REP(i, N){
        REP(j, W + 1){
            dp[i][j] = -1;
        }
    }
    lint ans = rec(N - 1);
    // REP(i, N){
    //     REP(j, W + 1){
    //         cout<< dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << ans << endl;
    return 0;
}
