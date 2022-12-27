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
    vector<string> s(n);
    REP(i,n)cin>>s[i];
    int ans = 0;
    REP(i, n){
        FOR(j, i+1, n){
            bool flag = true;
            REP(k, m){
                if(s[i][k] == 'x' && s[j][k] == 'x') flag = false;
            }
            if(flag) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
