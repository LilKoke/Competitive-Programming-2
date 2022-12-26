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
    int n, m; cin >> n >> m;
    vector<vector<int> > s(m);
    vector<int> k(m);
    REP(i, m){
        cin>>k[i];
        REP(j, k[i]){
            int sk;
            cin >> sk;
            s[i].push_back(sk);
        }
    }
    vector<int> p(m);
    REP(i,m) cin>> p[i];
    int ans = 0;
    for(int i = 0; i < (1 << n); i ++){
        int bit[n];
        bool flag = true;
        REP(j, n){
            int Div = (1 << j);
            bit[j] = (i / Div) % 2;
        }
        REP(j, m){
            int sum = 0;
            REP(l, k[j]){
                if(bit[s[j][l] - 1] == 1){
                    sum += 1;
                }
            }
            if(sum%2 != p[j]) flag = false;
        }
        if(flag) ans++;
    }
    cout << ans << endl;
    return 0;
}
