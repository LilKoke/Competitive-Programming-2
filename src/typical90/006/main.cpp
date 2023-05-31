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
    int n, k; cin>>n>>k;
    string s; cin>>s;
    vector<vector<int> > memo(n + 1);
    REP(i, n + 1){
        REP(j, 26){
            memo[i].push_back(-1);
        }
    }
    for(int i = s.length() - 1; i >= 0; i--){
        REP(j, 26) memo[i][j] = memo[i + 1][j];
        memo[i][s[i] - 'a'] = i;        
    } 
    string ans = "";
    REP(i, n){
        REP(j, 26){
            if(memo[i][j] != -1 && s.length() - memo[i][j]>= k - ans.length()){
                i = memo[i][j];
                ans += char(j + 'a');
                break;
            }
        }
        if(ans.length() == k) break;
    }
    cout << ans << endl;
    return 0;
}
