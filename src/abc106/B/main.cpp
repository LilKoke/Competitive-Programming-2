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
    int n; cin >> n;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        int factor = 0;
        if(i % 2 == 0) continue;
        for(int j = 1; (j * j) < i; j++){
            if((i % j) == 0){
                factor++;
                // cout << i << " " << j << endl;
            }
        }
        if(factor == 4){
            ans++;
            // cout << i << endl;
        }
    }
    cout << ans << endl;
    return 0;
}
