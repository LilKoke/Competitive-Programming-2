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
    string s; cin>>s;
    int ans = 0;
    bool one = false, two = false;
    REP(i, 10){
        REP(j, 10){
            REP(k, 10){
                REP(l, n){
                    if(!one && s[l] == i + '0'){
                        one = true;
                        continue;
                    }
                    if(one && !two && s[l] == j + '0'){
                        two = true;
                        continue;
                    }
                    if(one && two && s[l] == k + '0'){
                        ans++;
                        // cout<< i << j << k << endl;
                        break;
                    }
                }
                one = false;
                two = false;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
