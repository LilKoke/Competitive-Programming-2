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
    string s, t; cin>>s>>t;
    bool flag = true;
    REP(i, n){
        if(s[i] != t[i]){
            if(s[i] == '0'){
                if(t[i] == 'o') continue;
            }
            else if(s[i] == '1'){
                if(t[i] == 'l') continue;
            }
            else if(s[i] == 'o'){
                if(t[i] == '0') continue;
            }
            else if(s[i] == 'l'){
                if(t[i] == '1') continue;
            }
            else flag = false;
        }
    }
    if(flag) cout << "Yes" <<endl;
    else cout << "No" << endl;
    return 0;
}
