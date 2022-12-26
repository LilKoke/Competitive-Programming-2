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
    int n, m, x;
    cin >> n >> m >> x;
    int ans = -1;
    vector<int> c(n);
    vector<vector<int> > a(n); 
    REP(i, n){
        cin >> c[i];
        REP(j, m){
            int in; cin>>in;
            a[i].push_back(in);
        }
    }
    for(int i = 0; i < (1 << n); i++){
        int bit[n];
        int score[m];
        int sum = 0;
        REP(k, m) score[k] = 0;
        REP(j, n){
            int Div = (1 << j);
            bit[j] = (i / Div) % 2;
            if(bit[j] == 1){
                REP(k, m){
                    score[k] += a[j][k];
                }
                sum += c[j];
            }
        }
        bool flag = true;
        REP(k, m){
            if(score[k] < x) flag = false; 
        }
        if(flag){
            if(ans == -1) ans = sum;
            else ans = min(ans, sum);
        }
    }

    cout << ans << endl;
    return 0;
}
