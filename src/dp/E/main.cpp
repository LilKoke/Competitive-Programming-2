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
 
lint N, maxW;
lint W[101], V[101], dp[101][100001];

void rec(lint i){
    if(i == 0){
        REP(v, 100001){
            if(v == 0) dp[i][v] = 0;
            else dp[i][v] = linf;
        }
    } else {
        rec(i - 1);
        REP(v, 100001){
            if(v - V[i] >= 0){
                dp[i][v] = min(dp[i - 1][v], dp[i - 1][v - V[i]] + W[i]);
            }
            else dp[i][v] = dp[i - 1][v]; 
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>N>>maxW;
    FOR(i, 1, N + 1) cin>>W[i]>>V[i];
    REP(i, 101){
        REP(j, 100001){
            dp[i][j] = -1;
        }
    }
    rec(N);
    // REP(i, N){
    //     REP(j, 100){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(lint v = 100000; v >= 0; v--){
        if(dp[N][v] <= maxW){
            cout << v << endl;
            break;
        }
    }
    return 0;
}
