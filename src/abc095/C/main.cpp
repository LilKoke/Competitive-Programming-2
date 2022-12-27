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
    lint a, b, c, x, y; cin>>a>>b>>c>>x>>y;
    lint ans = linf;
    lint n = max(2 * x, 2 * y);
    REP(nab, n + 1){
        if(nab % 2 == 1) continue;
        lint na = x - nab / 2;
        lint nb = y - nab / 2;
        if(na < 0) na = 0;
        if(nb < 0) nb = 0;
        lint cost = a * na + b * nb + c * nab; 
        // if(cost < ans) cout << na << " " << nab << " " << nb << endl;
        ans = min(ans, cost); 
    }
    cout << ans << endl;
    return 0;
}
