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
    int n, m; cin>>n>>m;
    vector<vector<int> > memo(n);
    REP(i, n){
        REP(j, n){
            memo[i].push_back(1);
        }
    }
    vector<vector<int> > a(m);
    REP(i, m){
        REP(j, n){
            int in; cin>>in;
            a[i].push_back(in - 1);
        }
    }
    REP(i, m){
        REP(j, n){
            if(j - 1 < 0){
                memo[a[i][j]][a[i][j + 1]] = 0;
                memo[a[i][j + 1]][a[i][j]] = 0;
            }
            else if(j + 1 >= n){
                memo[a[i][j]][a[i][j - 1]] = 0;
                memo[a[i][j - 1]][a[i][j]] = 0;
            }
            else {
                memo[a[i][j]][a[i][j - 1]] = 0;
                memo[a[i][j - 1]][a[i][j]] = 0;
                memo[a[i][j]][a[i][j + 1]] = 0;
                memo[a[i][j + 1]][a[i][j]] = 0;
            }
        }
    }
    int ans = 0;
    REP(i, n){
        REP(j, n){
            // cout << memo[i][j];
            if(i == j) continue;
            ans+=memo[i][j];
        }
        // cout << endl;
    }
    cout << ans / 2 << endl;
    return 0;
}
