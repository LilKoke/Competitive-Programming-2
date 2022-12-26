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
    double x[n], y[n];
    int P[n];
    REP(i, n) P[i] = i;
    REP(i, n) cin>>x[i]>>y[i];
    double ans = 0;
    do{
        double ret = 0;
        REP(i, n - 1){
            ret += sqrt((x[P[i+1]] - x[P[i]]) * (x[P[i+1]] - x[P[i]]) + (y[P[i+1]] - y[P[i]]) * (y[P[i+1]] - y[P[i]]));
        }
        ans += ret;
    } while(next_permutation(P, P + n));
    double per = 1;
    REP(i, n) per *= double(i + 1);
    cout << setprecision(10);
    cout << ans / per << endl;
    return 0;
}
