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
    bool in = false;
    REP(i,n){
        if(!in && s[i] == '"') in = true;
        else if(in && s[i] == '"') in = false;
        if(!in && s[i] == ',') s[i] = '.';
    }
    cout << s << endl;
    return 0;
}
