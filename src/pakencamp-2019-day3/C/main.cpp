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
    lint n, m; cin>>n>>m;
    lint ans = 0;
    vector<vector<lint> > a(n);
    REP(i, n){
        REP(j, m){
            lint in; cin>>in;
            a[i].push_back(in);
        }
    }
    
    REP(j, m - 1){
        FOR(k, j + 1, m){
            lint sum = 0;
            REP(i, n){
                sum += max(a[i][j], a[i][k]);
            }
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
    return 0;
}
