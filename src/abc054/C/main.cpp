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
    vector<int> a(m), b(m);
    REP(i,m) cin>>a[i]>>b[i];
    int P[n];
    REP(i,n) P[i] = i + 1;
    int ans = 0;
    do{
        bool flag1 = true;
        REP(i,n-1){
            bool flag2 = false;
            REP(j, m){
                if(P[i] == a[j] && P[i + 1] == b[j]) flag2 = true;
                if(P[i] == b[j] && P[i + 1] == a[j]) flag2 = true;
            }
            if(!flag2) flag1 = false;
        }
        if(flag1) ans++;
    }while(next_permutation(P+1, P+n));
    cout << ans << endl;
    return 0;
}
