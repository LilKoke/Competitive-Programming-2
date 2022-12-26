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
    int a[n];
    vector<vector<int> > x(n), y(n);
    REP(i, n){
        cin >> a[i];
        REP(j, a[i]){
            int xin, yin;
            cin >> xin >> yin;
            x[i].push_back(xin);
            y[i].push_back(yin);
        }
    }
    int ans = 0;
    for(int i = 0; i < (1 << n); i++){
        int bit[n], sum = 0;
        bool flag = true;
        REP(j, n){
            int Div = (1 << j);
            bit[j] = (i / Div) % 2;
            if(bit[j] == 1) sum++;
        }
        REP(j, n){
            if(bit[j] == 1){
                REP(k, a[j]){
                    if(y[j][k] != bit[x[j][k] - 1]) flag = false;
                }
            }
        }
        if(flag){
            ans = max(ans, sum);
            // REP(j, n) cout << bit[j] << endl;
        }
    }
    cout << ans << endl;
    return 0;
}
