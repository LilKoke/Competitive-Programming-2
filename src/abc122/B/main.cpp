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
    string s; cin>>s;
    int n = s.length();
    int ans = 0;
    REP(start, n){
        FOR(end, start, n){
            string subs = s.substr(start, (end - start) + 1);
            bool flag = true;
            // cout << subs << endl;
            REP(i, subs.length()){
                if(subs[i] != 'A' & subs[i] != 'C' && subs[i] != 'G' && subs[i] != 'T'){
                    flag = false;
                    break;
                }
            }
            if(flag){
                int m = subs.length();
                ans = max(ans, m);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
