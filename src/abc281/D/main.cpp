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

lint N, K, D;
lint dp[101][101][101]; //N, K, D
lint a[101]; 
void rec(lint i){
    if(i == 0){
        dp[i][0][0] = 0;
    } else {
        rec(i - 1);
        //選ばれる場合
        REP(j, K + 1){
            REP(k, D){                
                //選ばれる場合
                if(dp[i - 1][j][k] != -1){
                    lint amari = (k + a[i - 1]) % D;
                    if(j + 1 <= K) dp[i][j + 1][amari] = max(dp[i][j + 1][amari], dp[i - 1][j][k] + a[i - 1]);
                    //選ばれない場合
                    dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j][k]);
                } 
            }
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>N>>K>>D;
    REP(i, N) cin>>a[i];
    REP(i, 101){
        REP(j, 101){
            REP(k, 101){
                dp[i][j][k] = -1;
            }
        }
    }
    rec(N);
    // REP(i, 5){
    //     REP(j, 3){
    //         REP(k, 3){
    //             cout << dp[i][j][k];
    //         }
    //     }
    //     cout << endl;
    // }
    cout << dp[N][K][0] << endl;
    return 0;
}
