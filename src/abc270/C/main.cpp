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
typedef vector<vector<int> > Graph;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, y;
    cin>>n>>x>>y;
    x--, y--;
    vector<int> route;
    Graph G(n);
    vector<int> seen(n);
    REP(i,n){
        seen[i] = 0;
        int u, v;
        cin>>u>>v;
        u--, v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    
    return 0;
}
