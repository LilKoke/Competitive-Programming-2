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
    long double a, b; cin>>a>>b;
    lint l = 0;
    lint r = a / b; 
    while(r - l > 2){
        long double m1 = (2 * l + r) / 3;
        long double  m2 = (l + 2 * r) / 3;
        long double tm1 = m1 * b + a / sqrt(1 + m1);
        long double tm2 = m2 * b + a / sqrt(1 + m2);
        if(tm2 > tm1) r = m2;
        else l = m1;
    }
    long double ans = a;
    for(lint i = l; i <= r; i++){
        long double cur = i * b + a / sqrt(1 + i);
        ans = min(ans, cur);
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
