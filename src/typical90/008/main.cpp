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
    string atcoder = "atcoder";
    vector<vector<int> > memo(7);
    REP(i, 7) REP(j, s.length() + 1) memo[i].push_back(0);
    REP(i, 7){
        for(int j = s.length() - 1; j >= 0; j--){
            if(i == 0){
                if(s[j] == atcoder[6 - i]) memo[i][j] = memo[i][j + 1] + 1;
                else memo[i][j] = memo[i][j + 1];
            } else {
                if(s[j] == atcoder[6 - i]){
                    memo[i][j] = memo[i - 1][j] + memo[i][j + 1];
                } else memo[i][j] = memo[i][j + 1];              
            }
            memo[i][j] %= int(1e9+7);
        }
    }
    cout << memo[6][0] << endl;
    return 0;
}
