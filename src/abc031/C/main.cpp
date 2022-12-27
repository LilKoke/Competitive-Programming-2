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
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin>>n;
    vector<int> a(n); REP(i,n) cin>>a[i];
    int takahashi_best = 0;
    int score_t_max = -inf;
    REP(takahashi, n){
        int aoki_best = 0;
        int score_a_max = -inf;
        int score_t = 0;
        REP(aoki, n){
            int score_a = 0;
            if(takahashi == aoki) continue;
            else if(aoki > takahashi){
                FOR(i, takahashi, aoki + 1){
                    if((i - takahashi) % 2 == 1) score_a += a[i];
                }
                
            } else {
                FOR(i, aoki, takahashi + 1){
                    if((i - aoki) % 2 == 1) score_a += a[i];
                }
            }
            if(score_a > score_a_max){
                score_a_max = score_a;
                aoki_best = aoki;
            }
        }
        if(aoki_best > takahashi){
            FOR(i, takahashi, aoki_best + 1){
                if((i - takahashi) % 2 == 0) score_t += a[i];
            }
        } else if(takahashi > aoki_best){
            FOR(i, aoki_best, takahashi + 1){
                if((i - aoki_best) % 2 == 0) score_t += a[i];
            }
        } else continue;
        if(score_t > score_t_max){
            score_t_max = score_t;
            takahashi_best = takahashi;
        }
    }
    cout << score_t_max << endl;
    return 0;
}
